/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_PrivilegeActive
bool Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeActive (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_PrivilegeActive
   bool Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeActive
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeActive_2245a98(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bf4e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf4e = 1;
  }
  iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeId_2244c08(param_1);
  puVar1 = PTR_DAT_04cb01b0;
  if (iVar2 < 1) {
    return false;
  }
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x80) == 0) {
      return false;
    }
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x80);
      uVar3 = Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeId_2244c08(param_1);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
          return false;
        }
        iVar2 = System_Array__IndexOf_int__297cf74
                          (*(undefined8 *)(lVar4 + 0x10),uVar3,0,*(int *)(lVar4 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04cad860 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                      0xc0) + 0x150));
        return iVar2 != -1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

