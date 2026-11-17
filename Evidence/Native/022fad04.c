/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunWand>d__8$$MoveNext
bool Dino_BusSand_App_UI_MechanicGuide__RunWand_d__8__MoveNext (Dino_BusSand_App_UI_MechanicGuide__RunWand_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022fbdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunWand>d__8$$MoveNext
   bool Dino_BusSand_App_UI_MechanicGuide__RunWand_d__8__MoveNext
   (Dino_BusSand_App_UI_MechanicGuide__RunWand_d__8_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_MechanicGuide__RunWand_d__8__MoveNext_21fad04
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9bc64 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04cb18c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 022fad84 to 023fae2b has its CatchHandler @ 022fb284 */
    FUN_02132f7c(PTR_DAT_04cb1938);
    FUN_02132f7c(PTR_DAT_04cb1970);
    FUN_02132f7c(PTR_DAT_04cb1940);
    FUN_02132f7c(PTR_DAT_04cb1978);
    FUN_02132f7c(PTR_DAT_04cb1980);
    FUN_02132f7c(PTR_DAT_04cb1988);
    FUN_02132f7c(PTR_DAT_04cad880);
    FUN_02132f7c(PTR_DAT_04cb1960);
    bRam0000000004f9bc64 = 1;
  }
  fVar13 = _UNK_00e20094;
  iVar1 = *(int *)(param_4 + 0x10);
  uVar3 = 0;
  uStack_64 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                        (*(long *)(param_4 + 0x20),0);
      *(undefined8 *)(param_4 + 0x48) = uVar7;
      thunk_FUN_02134474();
      puVar2 = PTR_DAT_04cb18c8;
      uVar7 = *(undefined8 *)(param_4 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UI_MechanicGuide__FindWandBait_21f9580(uVar7);
      *(int *)(param_4 + 0x50) = (int)uVar3;
      if (-1 < (int)uVar3) {
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x38);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = Dino_BusSand_View_GameView__VehicleOf_23ab408(lVar6,uVar3 & 0xffffffff,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                  (*(long *)(param_4 + 0x20),1,*(undefined8 *)PTR_DAT_04cb1960,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar12 = Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar6,0);
        uVar7 = *(undefined8 *)(param_4 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022fb234 to 023fb23b has its CatchHandler @ 022fb27c */
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022fb23c to 023fb29f has its CatchHandler @ 022fac98 */
        lVar6 = Dino_BusSand_App_UI_MechanicGuide__WorldGuide_21f9ba8
                          (uVar12,param_2,param_3,0,*(undefined8 *)PTR_DAT_04cb1970,1,uVar7);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined8 *)(lVar6 + 0x5c) = _UNK_00e69968;
                    /* catch() { ... } // from try @ 022fb004 with catch @ 022fb278 */
                    /* catch() { ... } // from try @ 022fb234 with catch @ 022fb27c */
        lVar4 = *(long *)(param_4 + 0x30);
                    /* catch() { ... } // from try @ 022faea8 with catch @ 022fb280 */
        *(undefined4 *)(lVar6 + 0x70) = *(undefined4 *)(param_4 + 0x50);
                    /* catch() { ... } // from try @ 022fad84 with catch @ 022fb284
                       catch() { ... } // from try @ 022faf18 with catch @ 022fb284
                       catch() { ... } // from try @ 022fb0f4 with catch @ 022fb284 */
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *(long *)(lVar4 + 0x28);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
                    /* catch() { ... } // from try @ 022fb428 with catch @ 022fb2a0 */
        uVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar4,*(undefined8 *)PTR_DAT_04cb1940,5,lVar6,
                           *(undefined8 *)PTR_DAT_04cb1938);
        *(undefined8 *)(param_4 + 0x58) = uVar7;
        thunk_FUN_02134474();
        uVar7 = Dino_BusSand_App_UI_MechanicGuide__WaitClosed_21f9db8
                          (*(undefined8 *)(param_4 + 0x58),*(undefined8 *)(param_4 + 0x28));
        *(undefined8 *)(param_4 + 0x18) = uVar7;
        thunk_FUN_02134474();
        uVar12 = 2;
        goto LAB_022fb414;
      }
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return 0;
        }
        *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                  (*(long *)(param_4 + 0x20),0,*(undefined8 *)PTR_DAT_04cb1960,0);
        if (*(long *)(param_4 + 0x58) == 0) {
          return 0;
        }
        if (*(char *)(*(long *)(param_4 + 0x58) + 0x40) == '\0') {
          return 0;
        }
        lVar6 = *(long *)(param_4 + 0x28);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar3 = (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28
                  (*(long *)(param_4 + 0x20),1,0);
        puVar2 = PTR_DAT_04ca9ae8;
        uVar7 = *(undefined8 *)(param_4 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar3 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* try { // try from 022fb0f4 to 023fb21b has its CatchHandler @ 022fb284 */
          lVar6 = Dino_BusSand_App_UI_HudPanel__Find_230a038
                            (*(long *)(param_4 + 0x38),*(undefined8 *)PTR_DAT_04cad880,0);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* catch() { ... } // from try @ 022fb3b0 with catch @ 022fb5b4 */
                    /* catch() { ... } // from try @ 022fb41c with catch @ 022fb5b8 */
          UnityEngine_Transform__SetAsLastSibling_43d4684(lVar6,0);
          lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* try { // try from 022fb5d0 to 023fb66b has its CatchHandler @ 022fb5d0
                       catch(type#1 @ 00000000) { ... } // from try @ 022fb5d0 with catch @ 022fb5d0
                       catch(type#1 @ 00000000) { ... } // from try @ 022fbc5c with catch @ 022fb5d0
                        */
          UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0);
        }
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x38);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x38);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          *(undefined4 *)(lVar6 + 0x170) = 0x40400000;
        }
        *(undefined8 *)(param_4 + 0x60) = 0;
        goto LAB_022fb2f0;
      }
                    /* try { // try from 022fb428 to 023fb5cf has its CatchHandler @ 022fb2a0 */
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    }
    lVar6 = *(long *)(param_4 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar3);
    }
    uVar3 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
    if ((uVar3 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_4 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UI_MechanicGuide__AnyRiding_21f9988(uVar7,param_4 + 0x50);
      if ((uVar3 & 1) == 0) {
        uStack_64 = 0x2714;
        uVar7 = System_Int32__ToString_482d750(&uStack_64,0);
        uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1980,uVar7,0);
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar7,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(*(long *)(param_4 + 0x20) + 0x60) != 0) {
          return 0;
        }
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
        uVar12 = 1;
        goto LAB_022fb414;
      }
    }
    lVar6 = *(long *)(param_4 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uStack_64 = 0x2714;
    uVar7 = System_Int32__ToString_482d750(&uStack_64,0);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1980,uVar7,0);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar7,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar6 = *(long *)(param_4 + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar6 + 0x60) != 0) {
      return 0;
    }
  }
  else {
    if (4 < iVar1) {
      if (iVar1 == 5) {
        *(undefined8 *)(param_4 + 0x58) = 0;
        *(undefined4 *)(param_4 + 0x10) = 0xfffffffd;
                    /* try { // try from 022fb3b0 to 023fb3bb has its CatchHandler @ 022fb5b4 */
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x58),0);
        uVar3 = Dino_BusSand_App_UI_MechanicGuide__RunWand_d__8____m__Finally1_21fbdf0(param_4);
        *(undefined4 *)(param_4 + 0x54) = 0;
      }
      else {
        if (iVar1 != 6) {
          return 0;
        }
        *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
        if (fVar13 <= *(float *)(param_4 + 0x54)) {
          return 0;
        }
      }
      lVar6 = *(long *)(param_4 + 0x28);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(uVar3);
      }
      uVar3 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      fVar14 = *(float *)(param_4 + 0x54);
      fVar13 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      *(float *)(param_4 + 0x54) = fVar14 + fVar13;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      uVar12 = 6;
      goto LAB_022fb414;
    }
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xfffffffd;
      if ((*(long *)(param_4 + 0x58) != 0) && (*(char *)(*(long *)(param_4 + 0x58) + 0x40) != '\0'))
      {
        lVar6 = *(long *)(param_4 + 0x28);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0);
        }
        uVar3 = (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        if ((uVar3 & 1) != 0) {
          lVar6 = *(long *)(param_4 + 0x20);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(lVar6 + 0x60) == 0x2714) {
            if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar6 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                              (*(long *)(lVar6 + 0x38),*(undefined4 *)(param_4 + 0x50),0);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
                    /* try { // try from 022faea8 to 023faeb3 has its CatchHandler @ 022fb280 */
            uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
            if ((uVar3 & 1) == 0) {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar4 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              fVar9 = (float)UnityEngine_Transform__get_position_43d0e48(lVar4,0);
              fVar13 = param_2;
              fVar14 = param_3;
              fVar10 = (float)FUN_0230c344(0);
              fVar11 = (float)Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(lVar6,0);
              uVar7 = *(undefined8 *)(param_4 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
                    /* try { // try from 022faf18 to 023fafcf has its CatchHandler @ 022fb284 */
                thunk_FUN_0218fdac();
              }
              lVar4 = Dino_BusSand_App_UI_MechanicGuide__WorldGuide_21f9ba8
                                (fVar9 + fVar10 * fVar11,param_2 + fVar13 * fVar11,
                                 param_3 + fVar14 * fVar11,0,*(undefined8 *)PTR_DAT_04cb1988,1,uVar7
                                );
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              *(undefined8 *)(lVar4 + 0x5c) = _UNK_00e6a070;
              uVar7 = *(undefined8 *)PTR_DAT_04cad728;
              *(undefined4 *)(lVar4 + 0x70) = *(undefined4 *)(param_4 + 0x50);
              lVar5 = thunk_FUN_0216e89c(uVar7);
              System_Collections_Generic_List_object____ctor_3a8138c
                        (lVar5,*(undefined8 *)PTR_DAT_04cad6f0);
              uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(uVar7,uVar7);
              }
              FUN_01e77d34(lVar5,uVar7,*(undefined8 *)PTR_DAT_04cad6c0);
              *(long *)(lVar4 + 0x78) = lVar5;
              thunk_FUN_02134474((long *)(lVar4 + 0x78),lVar5);
              if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar6 = *(long *)(*(long *)(param_4 + 0x30) + 0x28);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                (lVar6,*(undefined8 *)PTR_DAT_04cb1940,5,lVar4,
                                 *(undefined8 *)PTR_DAT_04cb1938);
                    /* try { // try from 022fb004 to 023fb09f has its CatchHandler @ 022fb278 */
              uVar7 = Dino_BusSand_App_UI_MechanicGuide__WaitClosed_21f9db8
                                (uVar7,*(undefined8 *)(param_4 + 0x28));
              *(undefined8 *)(param_4 + 0x18) = uVar7;
              thunk_FUN_02134474();
              uVar12 = 5;
              goto LAB_022fb414;
            }
          }
        }
      }
      goto LAB_022fba68;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
LAB_022fb2f0:
    lVar6 = *(long *)(param_4 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar3);
    }
    uVar3 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
    if ((((uVar3 & 1) != 0) && (*(float *)(param_4 + 0x60) < 8.0)) &&
       (*(float *)(param_4 + 100) < _UNK_00e20094)) {
      if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x38);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x38);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lVar6 + 0x40) == '\0') {
          fVar14 = *(float *)(param_4 + 0x60);
          fVar13 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
          *(float *)(param_4 + 0x60) = fVar14 + fVar13;
          if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar6 = *(long *)(*(long *)(param_4 + 0x48) + 0x20);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar3 = Dino_BusSand_Core_Road__TryGet_24127e0
                            (lVar6,*(undefined4 *)(param_4 + 0x50),&lStack_78,0);
                    /* try { // try from 022fb66c to 023fb67f has its CatchHandler @ 022fbcb0 */
          if ((uVar3 & 1) == 0) {
            if (1.5 < *(float *)(param_4 + 0x60)) goto LAB_022fb6b8;
          }
          else {
            if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(int *)(lStack_78 + 0x28) == 1) {
                    /* try { // try from 022fb688 to 023fb68f has its CatchHandler @ 022fbcac */
              fVar14 = *(float *)(param_4 + 100);
              fVar13 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
              *(float *)(param_4 + 100) = fVar14 + fVar13;
            }
          }
        }
      }
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      uVar12 = 3;
      goto LAB_022fb414;
    }
LAB_022fb6b8:
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
                    /* try { // try from 022fb6f0 to 023fb70b has its CatchHandler @ 022fbcc4 */
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x38);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar6 + 0x170) = 0x3f800000;
    }
    uVar7 = *(undefined8 *)(param_4 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022fb724 to 023fb72f has its CatchHandler @ 022fbccc */
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 022fb748 to 023fb947 has its CatchHandler @ 022fbcc8 */
      Dino_BusSand_App_UI_UIPanel__Show_21f4018
                (*(long *)(param_4 + 0x38),*(undefined8 *)PTR_DAT_04cad880,0);
    }
    if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28(*(long *)(param_4 + 0x20),0,0);
    lVar6 = *(long *)(param_4 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(*(long *)(param_4 + 0x48) + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = Dino_BusSand_Core_Road__TryGet_24127e0
                      (lVar6,*(undefined4 *)(param_4 + 0x50),&lStack_70,0);
    if ((uVar3 & 1) == 0) {
LAB_022fb7d4:
      uVar7 = *(undefined8 *)(param_4 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UI_MechanicGuide__AnyRiding_21f9988(uVar7,param_4 + 0x50);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(int *)(lStack_70 + 0x28) != 1) ||
         (uVar3 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(lStack_70,0), (uVar3 & 1) != 0))
      goto LAB_022fb7d4;
    }
    *(undefined8 *)(param_4 + 0x58) = 0;
    thunk_FUN_02134474((undefined8 *)(param_4 + 0x58),0);
    lVar6 = *(long *)(param_4 + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
            (lVar6,1,*(undefined8 *)PTR_DAT_04cb1960,0);
  puVar2 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)PTR_DAT_04ca9ae8;
  uVar7 = *(undefined8 *)(param_4 + 0x38);
  *(undefined4 *)(param_4 + 0x10) = 0xfffffffd;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(*(long *)(param_4 + 0x38),0x2714,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(*(long *)(param_4 + 0x38),0);
      lVar4 = Dino_BusSand_App_UI_GuideRequest__FromConfig_22ce980
                        (*(undefined4 *)(param_4 + 0x40),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(long *)(lVar4 + 0x28) = lVar6;
      thunk_FUN_02134474((long *)(lVar4 + 0x28),lVar6);
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_04cb1978;
      thunk_FUN_02134474();
      if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x38);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = Dino_BusSand_View_GameView__VehicleOf_23ab408(lVar6,*(undefined4 *)(param_4 + 0x50),0)
      ;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022fb96c to 023fba5b has its CatchHandler @ 022fbca4 */
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad728);
        System_Collections_Generic_List_object____ctor_3a8138c
                  (lVar5,*(undefined8 *)PTR_DAT_04cad6f0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(uVar7,uVar7);
        }
        FUN_01e77d34(lVar5,uVar7,*(undefined8 *)PTR_DAT_04cad6c0);
        *(long *)(lVar4 + 0x78) = lVar5;
        thunk_FUN_02134474((long *)(lVar4 + 0x78),lVar5);
      }
      if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *(long *)(*(long *)(param_4 + 0x30) + 0x28);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar6,*(undefined8 *)PTR_DAT_04cb1940,5,lVar4,
                         *(undefined8 *)PTR_DAT_04cb1938);
      *(undefined8 *)(param_4 + 0x58) = uVar7;
      thunk_FUN_02134474();
      uVar7 = *(undefined8 *)(param_4 + 0x58);
      uVar8 = *(undefined8 *)(param_4 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_UI_MechanicGuide__WaitClosed_21f9db8(uVar7,uVar8);
      *(undefined8 *)(param_4 + 0x18) = uVar7;
      thunk_FUN_02134474();
      uVar12 = 4;
LAB_022fb414:
                    /* try { // try from 022fb41c to 023fb427 has its CatchHandler @ 022fb5b8 */
      *(undefined4 *)(param_4 + 0x10) = uVar12;
      return 1;
    }
  }
LAB_022fba68:
  Dino_BusSand_App_UI_MechanicGuide__RunWand_d__8____m__Finally1_21fbdf0(param_4);
                    /* try { // try from 022fba8c to 023fbc3f has its CatchHandler @ 022fbcc8 */
  return 0;
}

