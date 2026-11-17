/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_9
bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_9 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_9
   bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_9
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_9_23244d0(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  lVar6 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_I_222f7d4(0);
  if (lVar6 != 0) {
    uVar7 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_CanPlay_222fa88(lVar6,0);
    if ((uVar7 & 1) != 0) {
      return true;
    }
    lVar6 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_I_222f7d4(0);
    if (lVar6 != 0) {
      if ((bRam0000000004f9be67 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caf808,0);
        bRam0000000004f9be67 = 1;
      }
      puVar2 = PTR_DAT_04caf808;
      iVar3 = 0;
      do {
        iVar8 = iVar3;
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar1 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
        if (iVar1 <= iVar8) break;
        iVar4 = Dino_BusSand_App_Meta_DailyChallengeFeature__MilestoneState_222fc18(lVar6,iVar8);
        iVar3 = iVar8 + 1;
      } while (iVar4 != 1);
      return iVar8 < iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

