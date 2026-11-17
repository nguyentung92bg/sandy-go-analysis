/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass102_0$$<RunPostWin>b__1
void Dino_BusSand_App_GameApp___c__DisplayClass102_0___RunPostWin_b__1 (Dino_BusSand_App_GameApp___c__DisplayClass102_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02267f14) */
/* WARNING: Removing unreachable block (ram,0x02267d40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass102_0$$<RunPostWin>b__1
   void Dino_BusSand_App_GameApp___c__DisplayClass102_0___RunPostWin_b__1
   (Dino_BusSand_App_GameApp___c__DisplayClass102_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass102_0___RunPostWin_b__1_216a988(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_38 [4];
  int aiStack_34 [3];
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar9 + 0x38) == '\0') {
    return;
  }
  if ((bRam0000000004f9b869 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440,0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac6d0);
    bRam0000000004f9b869 = 1;
  }
  puVar2 = PTR_DAT_04cac440;
  puVar1 = PTR_DAT_04cabaf8;
  if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac6d0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = Dino_BusSand_App_Meta_Economy__GoNextLevelDirectly_220486c(uVar3,0);
  if (((uVar6 & 1) != 0) &&
     (uVar6 = Dino_BusSand_App_Meta_WinStreak__get_WantsHome_2295078(0), puVar1 = PTR_DAT_04cac430,
     (uVar6 & 1) == 0)) {
    if ((bRam0000000004f9b861 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac420);
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04cac438);
      FUN_02132f7c(PTR_DAT_04cac430);
      bRam0000000004f9b861 = 1;
    }
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    Dino_BusSand_App_GameApp___c__DisplayClass93_0___ctor_216b3e4(lVar12,0);
    puVar1 = PTR_DAT_04caba50;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(long *)(lVar12 + 0x10) = lVar9;
    thunk_FUN_02134474((long *)(lVar12 + 0x10),lVar9);
    lVar5 = *(long *)puVar1;
    *(undefined4 *)(lVar12 + 0x18) = 0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
    if ((uVar6 & 1) != 0) {
      lVar12 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac
                         (lVar9,*(undefined4 *)(lVar12 + 0x18));
      if (lVar12 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar8 = thunk_FUN_0216e89c();
        uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar8,uVar7,0);
      }
      else {
        uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar6 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (lVar9 != 0) {
            lVar5 = *(long *)(lVar9 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar9,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar5,lVar12);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar8 = thunk_FUN_0216e89c();
        uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar8,uVar7,0);
      }
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar8,uVar7);
    }
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
    System_Action_bool____ctor_35ee0e8(lVar5,lVar12,*(undefined8 *)PTR_DAT_04cac438,0);
    if ((bRam0000000004f9b87b & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cac5a8);
      FUN_02132f7c(PTR_DAT_04cac5b0);
      bRam0000000004f9b87b = 1;
    }
    lVar9 = *(long *)(lVar9 + 0x28);
    uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar9 != 0) {
      lVar9 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar9,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar7,
                         *(undefined8 *)PTR_DAT_04cac5a8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),0,*(undefined8 *)(lVar5 + 0x28))
          ;
        }
      }
      else {
        if (lVar9 == 0) goto LAB_02265ea8;
        *(long *)(lVar9 + 0x38) = lVar5;
        thunk_FUN_02134474((long *)(lVar9 + 0x38),lVar5);
      }
      return;
    }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b874 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cac6d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac580);
    FUN_02132f7c(PTR_DAT_04cac6e0);
    FUN_02132f7c(PTR_DAT_04cac6e8);
    FUN_02132f7c(PTR_DAT_04cac6f0);
    FUN_02132f7c(PTR_DAT_04cac6f8);
    FUN_02132f7c(PTR_DAT_04cac700);
    FUN_02132f7c(PTR_DAT_04cac5e8);
    FUN_02132f7c(PTR_DAT_04cac6d0);
    FUN_02132f7c(PTR_DAT_04cac708);
    FUN_02132f7c(PTR_DAT_04cac710);
    FUN_02132f7c(PTR_DAT_04cac718);
    FUN_02132f7c(PTR_DAT_04cac720);
    FUN_02132f7c(PTR_DAT_04cac728);
    FUN_02132f7c(PTR_DAT_04cac730);
    FUN_02132f7c(PTR_DAT_04cac738);
    bRam0000000004f9b874 = 1;
  }
  puVar1 = PTR_DAT_04cac450;
  if (*(char *)(lVar9 + 0x50) != '\0') {
    return;
  }
  *(undefined1 *)(lVar9 + 0x38) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_CrashContext__Step_216db44
            (*(undefined8 *)PTR_DAT_04cac728,*(undefined8 *)PTR_DAT_04cac718,0);
  *(undefined4 *)(lVar9 + 0x60) = 0;
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac6e0);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac6d0);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac700);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac6f8);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac5e8);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac580);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac6f0);
  puVar1 = PTR_DAT_04ca9ae8;
  plVar11 = (long *)(lVar9 + 0x48);
  lVar12 = *plVar11;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_02267f5c;
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(*plVar11,0);
    *plVar11 = 0;
    thunk_FUN_02134474(plVar11,0);
  }
  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_Gameplay_GameplayController__Unload_229f9f8(*(long *)(lVar9 + 0x20),0);
  if ((*(long *)(lVar9 + 0x20) == 0) ||
     (lVar12 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                         (*(long *)(lVar9 + 0x20),0), lVar12 == 0)) goto LAB_02267f5c;
  UnityEngine_Behaviour__set_enabled_43bc50c(lVar12,0,0);
  puVar2 = PTR_DAT_04cac458;
  lVar12 = *(long *)PTR_DAT_04cac458;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar12 + 0xb8) + 5) != '\0') {
    plVar11 = (long *)(lVar9 + 0x30);
    lVar12 = *plVar11;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_04cac6d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac6d8);
      }
      lVar12 = Dino_BusSand_App_UI_HallScene__Create_22d0c80(uVar7,0);
      *plVar11 = lVar12;
      thunk_FUN_02134474(plVar11,lVar12);
    }
    lVar12 = *plVar11;
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (lVar12 != 0) {
      Dino_BusSand_App_UI_HallScene__Show_22d0fd8(lVar12,uVar3,*(undefined4 *)(lVar9 + 0x44),0);
      if ((*(long *)(lVar9 + 0x30) != 0) && (*(long *)(lVar9 + 0x28) != 0)) {
        Dino_BusSand_App_UI_UIManager__AttachTo_21fdf64
                  (*(long *)(lVar9 + 0x28),*(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x20),0);
        puVar1 = PTR_DAT_04cab1e8;
        *(undefined1 *)(lVar9 + 0x39) = 1;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__PlayMusic_214db34(_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac730);
        if (*(long *)(lVar9 + 0x28) != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_04cac6e8);
          lVar12 = *(long *)(lVar9 + 0x28);
          auStack_38[0] = 1;
          uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),auStack_38);
          if (lVar12 != 0) {
            Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (lVar12,*(undefined8 *)PTR_DAT_04cac720,1,uVar7,
                       *(undefined8 *)PTR_DAT_04cac710);
            lVar12 = *(long *)(lVar9 + 0x80);
            if (lVar12 != 0) {
              UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(lVar9,lVar12,0);
            }
            uVar7 = Dino_BusSand_App_GameApp__RunHallQueue_2169ad4(lVar9,1);
            uVar7 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar9,uVar7,0);
            *(undefined8 *)(lVar9 + 0x80) = uVar7;
            thunk_FUN_02134474((long *)(lVar9 + 0x80),uVar7);
            return;
          }
        }
      }
    }
    goto LAB_02267f5c;
  }
  lVar12 = Dino_BusSand_App_GameApp__HomeCamera_2169884(lVar9);
  if (lVar12 == 0) goto LAB_02267f5c;
  UnityEngine_Behaviour__set_enabled_43bc50c(lVar12,1,0);
  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__AttachTo_21fdf64(*(long *)(lVar9 + 0x28),lVar12,0);
  if ((*(char *)(lVar9 + 0x78) == '\0') || (iVar10 = *(int *)(lVar9 + 0x44), iVar10 < 1)) {
LAB_02267cd0:
    iVar10 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (iVar10 != iVar4 + -1) goto LAB_02267cd0;
    iVar10 = *(int *)(lVar9 + 0x44);
  }
  uVar7 = Dino_BusSand_App_GameApp__get_Home_2169a38(lVar9);
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar6 & 1) == 0) {
    lVar12 = Dino_BusSand_App_GameApp__get_Home_2169a38(lVar9);
    if (lVar12 != 0) {
      Dino_BusSand_App_UI_HomePanel__Refresh_22ea830(lVar12,0);
      if (0 < iVar10) {
        lVar12 = Dino_BusSand_App_GameApp__get_Home_2169a38(lVar9);
        if (lVar12 == 0) goto LAB_02267f5c;
        Dino_BusSand_App_UI_HomePanel__Homecoming_22eafc0(lVar12,iVar10,0);
      }
LAB_02267eb0:
      puVar1 = PTR_DAT_04cab1e8;
      *(undefined1 *)(lVar9 + 0x39) = 1;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__PlayMusic_214db34(_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac730);
      lVar12 = *(long *)(lVar9 + 0x88);
      if (lVar12 != 0) {
        UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(lVar9,lVar12,0);
      }
      uVar7 = Dino_BusSand_App_UI_HomeQueue__Run_23200c4(lVar9,*(char *)(lVar9 + 0x78) != '\0',0);
      uVar7 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar9,uVar7,0);
      *(undefined8 *)(lVar9 + 0x88) = uVar7;
      thunk_FUN_02134474((long *)(lVar9 + 0x88),uVar7);
      *(undefined1 *)(lVar9 + 0x78) = 0;
      return;
    }
  }
  else {
    lVar12 = *(long *)(lVar9 + 0x28);
    uVar7 = *(undefined8 *)PTR_DAT_04cac738;
    if (iVar10 < 1) {
      uVar8 = 0;
    }
    else {
      aiStack_34[0] = iVar10;
      uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),aiStack_34);
    }
    if (lVar12 != 0) {
      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                (lVar12,uVar7,0,uVar8,*(undefined8 *)PTR_DAT_04cac708);
      goto LAB_02267eb0;
    }
  }
LAB_02267f5c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

