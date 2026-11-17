/* IL2CPP: Dino.BusSand.App.Meta.WelcomeBack$$OnColdStart
void Dino_BusSand_App_Meta_WelcomeBack__OnColdStart (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WelcomeBack$$OnColdStart
   void Dino_BusSand_App_Meta_WelcomeBack__OnColdStart (const MethodInfo* method); */

void Dino_BusSand_App_Meta_WelcomeBack__OnColdStart_220ea0c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd28 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    bRam0000000004f9bd28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  uVar5 = Dino_BusSand_App_Meta_WelcomeBack__get_On_220e99c();
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar4 + 0x1a0) == '\0') {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
      iVar2 = Dino_BusSand_App_Meta_Profile__get_DaysAway_2271f98(0);
      iVar3 = Dino_BusSand_App_Meta_Monetization__get_WelcomeBackAwayDays_226858c(0);
      if (iVar3 <= iVar2) {
        if (*(int *)(*(long *)PTR_DAT_04cacfe0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_Meta_Segments__get_IsNew_220eb60();
        if (((uVar5 & 1) == 0) &&
           ((lVar7 = *(long *)(lVar4 + 0x198), lVar7 < 0 ||
            (iVar2 = Dino_BusSand_App_Meta_Monetization__get_WelcomeBackCooldownDays_22685e8(0),
            (long)iVar2 <= lVar6 - lVar7)))) {
          lVar6 = *(long *)puVar1;
          *(undefined1 *)(lVar4 + 0x1a0) = 1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar1 = PTR_DAT_04cabaf8;
          if ((bRam0000000004f9c0ee & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            bRam0000000004f9c0ee = 1;
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)puVar1;
          }
          *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x28) = 1;
          fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
          *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = fVar8 + 0.5;
          return;
        }
      }
    }
  }
  return;
}

