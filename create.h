#ifndef CREATE_H
# define CREATE_H

char *create_meta_name(char *vpath, char *prefix);
int create_new_version(const char *vpath);
int create_new_subversion(const char *vpath, mode_t mode, uid_t uid, gid_t gid);
int create_new_file(const char *vpath, mode_t mode, uid_t uid, gid_t gid, dev_t dev);
int create_new_symlink(const char *dest, const char *vpath, uid_t uid, gid_t gid);
int create_new_directory(const char *vpath, mode_t mode, uid_t uid, gid_t gid);
int create_copy_file(const char *source, const char *target);

#endif /* !CREATE_H */
