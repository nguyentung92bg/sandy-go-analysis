/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$AddWin
bool Dino_BusSand_App_Meta_WeeklyCupModel__AddWin (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int32_t levelType, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$AddWin
   bool Dino_BusSand_App_Meta_WeeklyCupModel__AddWin (Dino_BusSand_App_Meta_WeeklyCupModel_o*
   __this, int32_t levelType, int64_t nowMs, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_WeeklyCupModel__AddWin_223036c(long param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x18) == '\0') {
      Dino_BusSand_App_Meta_WeeklyCupModel__Join_2231044
                (param_1,param_3,*(undefined4 *)(lVar1 + 0x20));
      lVar1 = *(long *)(param_1 + 0x10);
      if (lVar1 == 0) goto LAB_023303f0;
    }
    else if (*(long *)(lVar1 + 0x10) + 0x240c8400 <= param_3) {
      return 0;
    }
    iVar2 = 2;
    if (param_2 != 1) {
      iVar2 = 3;
    }
    if (param_2 < 1) {
      iVar2 = 1;
    }
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + iVar2;
    return 1;
  }
LAB_023303f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

