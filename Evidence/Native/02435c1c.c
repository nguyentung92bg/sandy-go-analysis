/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$OnOpen
void Dino_BusSand_App_UI_WinStreakPanel__OnOpen (Dino_BusSand_App_UI_WinStreakPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$OnOpen
   void Dino_BusSand_App_UI_WinStreakPanel__OnOpen (Dino_BusSand_App_UI_WinStreakPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__OnOpen_2335c1c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9c63d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cafba8);
    FUN_02132f7c(PTR_DAT_04cafbc8);
    bRam0000000004f9c63d = 1;
  }
  puVar4 = PTR_DAT_04cafbc8;
  puVar3 = PTR_DAT_04cafba8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__TowerBusImpression_221a0a0
            (*(undefined8 *)puVar4,*(undefined8 *)puVar3,0);
  iVar5 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
  if (iVar5 == 2) {
    Dino_BusSand_App_Meta_WinStreak__Start_2293a18(0);
  }
  lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
  puVar2 = PTR_DAT_04cad4c0;
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x1c);
    iVar6 = Dino_BusSand_App_Meta_WinStreak__get_TopFloor_2293148(0);
    iVar5 = iVar1;
    if (iVar6 <= iVar1) {
      iVar5 = iVar6;
    }
    iVar6 = 0;
    if (-1 < iVar1) {
      iVar6 = iVar5;
    }
    *(float *)(param_1 + 0xb0) = (float)iVar6;
    Dino_BusSand_App_UI_WinStreakPanel__BuildSky_2335e14(param_1);
    Dino_BusSand_App_UI_WinStreakPanel__BuildTower_2336298(param_1);
    Dino_BusSand_App_UI_WinStreakPanel__BuildHeader_2336ee0(param_1);
    Dino_BusSand_App_UI_WinStreakPanel__SetFloor_233775c(*(undefined4 *)(param_1 + 0xb0),param_1,1);
    uVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    lVar7 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar8,0);
    puVar2 = PTR_DAT_04cad568;
    if (lVar7 != 0) {
      UnityEngine_CanvasGroup__set_alpha_467ad3c(0,lVar7,0);
      Dino_BusSand_App_UI_UiMotion__Fade_2291234(0x3f800000,_UNK_00e207cc,0,lVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      if (**(long **)(lVar7 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Whoosh_2382bbc(_UNK_00e20170,**(long **)(lVar7 + 0xb8),0);
      }
      lVar7 = Dino_BusSand_App_UI_WinStreakPanel__Intro_2337ae4(param_1);
      if (lVar7 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar10 = thunk_FUN_0216e89c();
        uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar10,uVar8,0);
      }
      else {
        uVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar9 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar11 = *(long *)(param_1 + 0x10);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar11,lVar7);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar10 = thunk_FUN_0216e89c();
        uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar10,uVar8,0);
      }
      uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar10,uVar8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

