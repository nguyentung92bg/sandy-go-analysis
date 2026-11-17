/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$FlyAndContinue
void Dino_BusSand_App_UI_WinPanel__FlyAndContinue (Dino_BusSand_App_UI_WinPanel_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$FlyAndContinue
   void Dino_BusSand_App_UI_WinPanel__FlyAndContinue (Dino_BusSand_App_UI_WinPanel_o* __this,
   int32_t amount, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinPanel__FlyAndContinue_231390c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               int param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c558 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb8370);
    bRam0000000004f9c558 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  if (((uVar9 & 1) != 0) || (*(char *)(param_4 + 0x2c) != '\0')) {
    return;
  }
  plVar12 = (long *)(param_4 + 0x58);
  if (*plVar12 != 0) {
    Dino_BusSand_App_Tween__Kill_2160f04(*plVar12,1,0);
    *plVar12 = 0;
    thunk_FUN_02134474(plVar12,0);
  }
  if (0 < param_5) {
    uVar13 = *(undefined8 *)(param_4 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
    if ((uVar9 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_4 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = _UNK_00e20aec;
      Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e207d8,_UNK_00e20aec,uVar13,0,0,0);
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
      System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                (lVar10,*(undefined8 *)PTR_DAT_04caca50);
      uStack_50 = 0;
      uStack_48 = 0;
      System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                (&uStack_50,0x3e9,param_5,*(undefined8 *)PTR_DAT_04cae910);
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar10 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cae058;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + 0x20) = uStack_50;
            *(undefined8 *)(lVar7 + 0x28) = uStack_48;
          }
          else {
            System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                      (lVar10,uStack_50,uStack_48,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_4 + 0x48) != 0) {
            uVar14 = UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x48),0);
            uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar13,param_4,*(undefined8 *)PTR_DAT_04cb8370,0);
            Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24
                      (uVar14,uVar6,param_3,lVar10,uVar13,0,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c559 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cb8378);
    bRam0000000004f9c559 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  puVar2 = PTR_DAT_04caba50;
  if (((uVar9 & 1) != 0) || (*(char *)(param_4 + 0x2c) != '\0')) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar2;
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    uVar9 = Dino_BusSand_App_UI_PostWinFlow__Pending_2313d84
                      (*(undefined4 *)(**(long **)(lVar10 + 0xb8) + 0x44));
    if ((uVar9 & 1) == 0) {
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar13,param_4,*(undefined8 *)PTR_DAT_04cb8378,0);
      if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar13,&stack0xffffffffffffffc8,0);
      return;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04cac6b8;
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 != 0) {
      if ((bRam0000000004f9b868 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa458,0);
        FUN_02132f7c(PTR_DAT_04cac440);
        FUN_02132f7c(PTR_DAT_04cac458);
        FUN_02132f7c(PTR_DAT_04cac6c0);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04cac6c8);
        FUN_02132f7c(PTR_DAT_04cac6b8);
        FUN_02132f7c(PTR_DAT_04cac6d0);
        bRam0000000004f9b868 = 1;
      }
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      Dino_BusSand_App_GameApp___c__DisplayClass102_0___ctor_216a818(lVar7,0);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar10;
        thunk_FUN_02134474((long *)(lVar7 + 0x10),lVar10);
        puVar3 = PTR_DAT_04cac440;
        puVar2 = PTR_DAT_04cabaf8;
        if (*(long *)(lVar10 + 0x28) != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (*(long *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_04cac6d0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          puVar3 = PTR_DAT_04cac6c8;
          puVar2 = PTR_DAT_04caa458;
          uVar9 = Dino_BusSand_App_Meta_Economy__GoNextLevelDirectly_220486c(uVar6,0);
          if (((uVar9 & 1) == 0) ||
             (uVar9 = Dino_BusSand_App_Meta_WinStreak__get_WantsHome_2295078(0), (uVar9 & 1) != 0))
          {
            puVar4 = PTR_DAT_04cac6c0;
            lVar8 = *(long *)PTR_DAT_04cac6c0;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar4;
            }
            puVar4 = PTR_DAT_04cac458;
            bVar5 = false;
            if (**(char **)(lVar8 + 0xb8) != '\0') {
              lVar8 = *(long *)PTR_DAT_04cac458;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *(long *)puVar4;
              }
              bVar5 = *(char *)(*(long *)(lVar8 + 0xb8) + 5) == '\0';
            }
          }
          else {
            bVar5 = false;
          }
          uVar13 = *(undefined8 *)puVar2;
          uVar11 = *(undefined8 *)(lVar10 + 0x28);
          *(bool *)(lVar7 + 0x18) = bVar5;
          uVar13 = thunk_FUN_0216e89c(uVar13);
          System_Action___ctor_47b5ed0(uVar13,lVar7,*(undefined8 *)puVar3,0);
          lVar7 = Dino_BusSand_App_UI_PostWinFlow__Run_231fbb4(uVar11,uVar13,0);
          if (lVar7 == 0) {
            thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
            uVar11 = thunk_FUN_0216e89c();
            uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
            System_NullReferenceException___ctor_483267c(uVar11,uVar13,0);
          }
          else {
            uVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
            if ((uVar9 & 1) != 0) {
              if ((bRam0000000004fa84ef & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7890);
                bRam0000000004fa84ef = 1;
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar8 = *(long *)(lVar10 + 0x10);
              if (lVar8 != 0) {
                if (pcRam0000000004fa8560 == (code *)0x0) {
                  pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa8560)(lVar8,lVar7);
                return;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
            }
            thunk_FUN_021985a8(PTR_DAT_04caa3a8);
            uVar11 = thunk_FUN_0216e89c();
            uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
            System_ArgumentException___ctor_47b660c(uVar11,uVar13,0);
          }
          uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,uVar13);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

