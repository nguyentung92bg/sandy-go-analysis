/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsPassportActive
bool Dino_BusSand_App_Meta_PassportFeature__IsPassportActive (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsPassportActive
   bool Dino_BusSand_App_Meta_PassportFeature__IsPassportActive
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

byte Dino_BusSand_App_Meta_PassportFeature__IsPassportActive_22462e8(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf58 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x14) == 1) &&
       (uVar4 = Dino_BusSand_App_Meta_PassportFeature__SnapshotValid_22460ec(param_1),
       (uVar4 & 1) != 0)) {
      bVar2 = 0;
      if (*(char *)(lVar3 + 0x60) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcSec_2235298(0);
        bVar2 = Dino_BusSand_App_Meta_PassportFeature__SnapshotExpired_2246258(param_1,uVar5);
        bVar2 = bVar2 ^ 1;
      }
    }
    else {
      bVar2 = 0;
    }
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

