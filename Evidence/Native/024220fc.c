/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_PassportOn
bool Dino_BusSand_App_UI_LiveOpsHome__get_PassportOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_PassportOn
   bool Dino_BusSand_App_UI_LiveOpsHome__get_PassportOn (const MethodInfo* method); */

byte Dino_BusSand_App_UI_LiveOpsHome__get_PassportOn_23220fc(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c5b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9c5b6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(9,0);
  puVar1 = PTR_DAT_04caef48;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
    if (lVar6 != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
      puVar1 = PTR_DAT_04cb01b0;
      if (lVar6 != 0) {
        if ((bRam0000000004f9bf58 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb01b0,0);
          FUN_02132f7c(PTR_DAT_04caef48);
          bRam0000000004f9bf58 = 1;
        }
        lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (lVar6,*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          if ((*(int *)(lVar3 + 0x14) == 1) &&
             (uVar5 = Dino_BusSand_App_Meta_PassportFeature__SnapshotValid_22460ec(lVar6),
             (uVar5 & 1) != 0)) {
            bVar2 = 0;
            if (*(char *)(lVar3 + 0x60) != '\0') {
              if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcSec_2235298(0);
              bVar2 = Dino_BusSand_App_Meta_PassportFeature__SnapshotExpired_2246258(lVar6,uVar4);
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
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

