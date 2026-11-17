/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RemainingSeconds
int64_t Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RemainingSeconds
   int64_t Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf56 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  puVar2 = PTR_DAT_04caa200;
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x58);
    if (0 < lVar3) {
      if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcSec_2235298(0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar5 = lVar3 - lVar4;
      uVar1 = 0;
      if (uVar5 < 0x8000000000000000) {
        uVar1 = uVar5;
      }
      return uVar1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

