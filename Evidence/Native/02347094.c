/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsPassClaimed
bool Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsPassClaimed
   bool Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf6e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf6e = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x38) == 0) {
      return false;
    }
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        iVar2 = System_Array__IndexOf_int__297cf74
                          (*(undefined8 *)(lVar3 + 0x10),param_2,0,*(int *)(lVar3 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04cad860 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                      0xc0) + 0x150));
        return iVar2 != -1;
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

