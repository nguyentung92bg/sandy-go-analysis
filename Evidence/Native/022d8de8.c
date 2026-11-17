/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<>c__DisplayClass30_0$$<BindStage>b__3
void Dino_BusSand_App_UI_PassportPanel___c__DisplayClass30_0___BindStage_b__3 (Dino_BusSand_App_UI_PassportPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022d79b4) */
/* WARNING: Removing unreachable block (ram,0x023a8ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<>c__DisplayClass30_0$$<BindStage>b__3
   void Dino_BusSand_App_UI_PassportPanel___c__DisplayClass30_0___BindStage_b__3
   (Dino_BusSand_App_UI_PassportPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_PassportPanel___c__DisplayClass30_0___BindStage_b__3_21d8de8
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *puVar21;
  int *piVar22;
  long lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  float fStack_ac;
  long lStack_a8;
  undefined8 uStack_68;
  
  uVar20 = *(ulong *)(param_4 + 0x10);
  if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar33 = *(int *)(param_4 + 0x18);
                    /* try { // try from 022d8df8 to 023d8e57 has its CatchHandler @ 022d8df8
                       catch() { ... } // from try @ 022d8df8 with catch @ 022d8df8
                       catch() { ... } // from try @ 022d8f4c with catch @ 022d8df8
                       catch() { ... } // from try @ 022d8f78 with catch @ 022d8df8 */
  uVar10 = uVar20;
  if ((bRam0000000004f9bb61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0858);
    FUN_02132f7c(PTR_DAT_04cb0828);
    FUN_02132f7c(PTR_DAT_04caec90);
    uVar10 = FUN_02132f7c(PTR_DAT_04cb0830);
    bRam0000000004f9bb61 = 1;
  }
  if ((*(char *)(uVar20 + 0x49) != '\0') || (*(char *)(uVar20 + 0x48) != '\0')) {
    return uVar10;
  }
  if (*(long *)(uVar20 + 0x40) == 0) {
LAB_022d8238:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar10 = Dino_BusSand_App_Meta_PassportFeature__CanClaimPass_2247180
                     (*(long *)(uVar20 + 0x40),iVar33,0);
  lVar11 = *(long *)(uVar20 + 0x40);
  if ((uVar10 & 1) != 0) {
    if (lVar11 != 0) {
      uVar12 = Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468(lVar11,iVar33,1,0);
      if (*(long *)(uVar20 + 0x40) != 0) {
        uVar10 = Dino_BusSand_App_Meta_PassportFeature__ClaimPass_2248320
                           (*(long *)(uVar20 + 0x40),iVar33,0);
        puVar2 = PTR_DAT_04cab1e8;
        if ((uVar10 & 1) == 0) {
          return uVar10;
        }
        if ((bRam0000000004f9bb65 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cab1e8);
          FUN_02132f7c(PTR_DAT_04caec68);
          FUN_02132f7c(PTR_DAT_04cad7c8);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cae880);
          FUN_02132f7c(PTR_DAT_04cb0728);
          FUN_02132f7c(PTR_DAT_04cb0738);
          FUN_02132f7c(PTR_DAT_04cb06d8);
          FUN_02132f7c(PTR_DAT_04cb0838);
          FUN_02132f7c(PTR_DAT_04cb0840);
          FUN_02132f7c(PTR_DAT_04cb0848);
          bRam0000000004f9bb65 = 1;
        }
        puVar3 = PTR_DAT_04cae880;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar3,0);
        if ((*(long *)(uVar20 + 0x78) != 0) &&
           (lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                               (*(long *)(uVar20 + 0x78),iVar33,*(undefined8 *)PTR_DAT_04cad7c8),
           puVar2 = PTR_DAT_04ca9ae8, lVar11 != 0)) {
          lVar11 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb0840,0);
          Dino_BusSand_App_UI_PassportPanel__RefreshStage_21d5994(uVar20,iVar33);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar3 = PTR_DAT_04caec68;
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar11 == 0) goto LAB_022d7b4c;
            uVar8 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb06d8,0);
            lVar19 = *(long *)puVar3;
            if (*(int *)(lVar19 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar19);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar8,0,0);
            uVar8 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb0738,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar8,1,0);
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar8,*(undefined8 *)PTR_DAT_04cb0848,0);
            uVar8 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb0728,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar8,0,0);
          }
          plVar9 = (long *)Dino_BusSand_App_UI_PassportUi__FlyList_21d8358(uVar12);
          lVar19 = *(long *)puVar2;
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar19);
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          if ((uVar10 & 1) == 0) {
            lVar11 = UnityEngine_Component__get_transform_43bcd18(uVar20,0);
          }
          if (lVar11 != 0) {
            uVar24 = UnityEngine_Transform__get_position_43d0e48(lVar11,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if ((bRam0000000004f9c298 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04caf5d8,0,0,0);
              FUN_02132f7c(PTR_DAT_04caf7a0);
              FUN_02132f7c(PTR_DAT_04caca60);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              bRam0000000004f9c298 = 1;
            }
            puVar2 = PTR_DAT_04ca9ae8;
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar20 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
            if ((plVar9 != (long *)0x0) && ((uVar20 & 1) == 0)) {
              lVar19 = *plVar9;
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar20 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_04caf5d8) {
                    puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_023a8e4c;
                  }
                  uVar20 = uVar20 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar20 != 0);
              }
              puVar14 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
              uVar20 = (*(code *)*puVar14)(plVar9,puVar14[1]);
              if ((int)uVar20 != 0) {
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar20 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar11,0);
                if ((uVar20 & 1) != 0) {
                  uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
                  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                            (uVar12,plVar9,*(undefined8 *)PTR_DAT_04caf7a0);
                  lVar19 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                                     (uVar24,param_2,param_3,lVar11,uVar12,0,0);
                  if (lVar19 == 0) {
                    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                    uVar8 = thunk_FUN_0216e89c();
                    uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                    System_NullReferenceException___ctor_483267c(uVar8,uVar12,0);
                  }
                  else {
                    uVar20 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                    if ((uVar20 & 1) != 0) {
                      if ((bRam0000000004fa84ef & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cf7890);
                        bRam0000000004fa84ef = 1;
                      }
                      if (lVar11 != 0) {
                        lVar23 = *(long *)(lVar11 + 0x10);
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                    (lVar11,0);
                        }
                        if (pcRam0000000004fa8560 == (code *)0x0) {
                          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar20 = (*pcRam0000000004fa8560)(lVar23,lVar19);
                        return uVar20;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                    uVar8 = thunk_FUN_0216e89c();
                    uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                    System_ArgumentException___ctor_47b660c(uVar8,uVar12,0);
                  }
                  uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar8,uVar12);
                }
              }
            }
            return uVar20;
          }
        }
LAB_022d7b4c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    goto LAB_022d8238;
  }
  if (lVar11 == 0) goto LAB_022d8238;
  uVar10 = Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094(lVar11,iVar33,0);
  if (*(long *)(uVar20 + 0x40) == 0) goto LAB_022d8238;
  iVar5 = Dino_BusSand_App_Meta_PassportFeature__PassBox_22452ec(*(long *)(uVar20 + 0x40),iVar33,0);
  if ((iVar33 != 0) && (0 < iVar5)) {
    if (*(long *)(uVar20 + 0x40) == 0) goto LAB_022d8238;
    Dino_BusSand_App_Meta_PassportFeature__PassBox_22452ec(*(long *)(uVar20 + 0x40),iVar33,0);
    uVar12 = Dino_BusSand_App_UI_PassportPanel__BoxText_21d7b50();
    uVar13 = Dino_BusSand_App_UI_PassportPanel__Toast_21d7f0c(uVar12,uVar12);
    if ((uVar10 & 1) != 0) {
      return uVar13;
    }
    if ((bRam0000000004f9bb64 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab1e8);
      FUN_02132f7c(PTR_DAT_04caec68);
      FUN_02132f7c(PTR_DAT_04cad7c8);
      FUN_02132f7c(PTR_DAT_04cb0860);
      FUN_02132f7c(PTR_DAT_04caf148);
      FUN_02132f7c(PTR_DAT_04cb0868);
      bRam0000000004f9bb64 = 1;
    }
    if ((*(long *)(uVar20 + 0x78) == 0) ||
       (lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                           (*(long *)(uVar20 + 0x78),iVar33,*(undefined8 *)PTR_DAT_04cad7c8),
       puVar4 = PTR_DAT_04cb0860, puVar3 = PTR_DAT_04caec68, puVar2 = PTR_DAT_04cab1e8, lVar11 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb0868,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    puVar3 = PTR_DAT_04caf148;
    Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar12,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = *(undefined8 *)puVar3;
    if ((bRam0000000004f9b7a4 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab1f0,0);
      bRam0000000004f9b7a4 = 1;
    }
    uVar20 = System_String__IsNullOrEmpty_46d2084(uVar12,0);
    puVar2 = PTR_DAT_04cab1f0;
    if ((uVar20 & 1) != 0) {
      return uVar20;
    }
    if (*(int *)(*(long *)PTR_DAT_04cab1f0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88a == '\0') {
      FUN_02132f7c(PTR_DAT_04cab1f0);
      cRam0000000004f9b88a = '\x01';
    }
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar2;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 == 0) {
      return 0;
    }
    if ((bRam0000000004f9c7ef & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab1f0);
      FUN_02132f7c(PTR_DAT_04ca9af8);
      FUN_02132f7c(PTR_DAT_04cbb220);
      FUN_02132f7c(PTR_DAT_04cad650);
      FUN_02132f7c(PTR_DAT_04cbb120);
      FUN_02132f7c(PTR_DAT_04cad660);
      FUN_02132f7c(PTR_DAT_04cbb128);
      FUN_02132f7c(PTR_DAT_04cbb200);
      FUN_02132f7c(PTR_DAT_04cab6a0);
      FUN_02132f7c(PTR_DAT_04cbb208);
      FUN_02132f7c(PTR_DAT_04cab6c8);
      FUN_02132f7c(PTR_DAT_04cab6d0);
      FUN_02132f7c(PTR_DAT_04cbb210);
      FUN_02132f7c(PTR_DAT_04cab7e0);
      FUN_02132f7c(PTR_DAT_04cbb218);
      FUN_02132f7c(PTR_DAT_04cab720);
      FUN_02132f7c(PTR_DAT_04cb1848);
      FUN_02132f7c(PTR_DAT_04cb1850);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cbb228);
      FUN_02132f7c(PTR_DAT_04cbb268);
      FUN_02132f7c(PTR_DAT_04cbb230);
      FUN_02132f7c(PTR_DAT_04cbb270);
      bRam0000000004f9c7ef = 1;
    }
    lStack_a8 = 0;
    fStack_ac = 0.0;
    uStack_d0 = 0;
    puStack_c8 = (undefined8 *)0x0;
    lStack_c0 = 0;
    iStack_d4 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar20 = System_String__IsNullOrEmpty_46d2084(uVar12,0);
    uVar7 = 0;
    if ((uVar20 & 1) != 0) goto LAB_0247539c;
    lVar19 = *(long *)(lVar11 + 0x28);
    uVar8 = Dino_BusSand_AudioHub__Key_23746fc(lVar11,uVar12);
    if (lVar19 == 0) goto LAB_024759b8;
    uVar20 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                       (lVar19,uVar8,&lStack_a8,*(undefined8 *)PTR_DAT_04cbb120);
    if ((uVar20 & 1) == 0) {
      lVar11 = *(long *)(lVar11 + 0x40);
      uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb270,uVar12,0);
      if (lVar11 == 0) goto LAB_024759b8;
      uVar20 = System_Collections_Generic_HashSet_object___Add_37e654c
                         (lVar11,uVar8,*(undefined8 *)PTR_DAT_04cab7e0);
      if ((uVar20 & 1) != 0) {
        uVar12 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb268,uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__LogWarning_4357a30(uVar12,0);
      }
LAB_02475398:
      uVar7 = 0;
      goto LAB_0247539c;
    }
    if (lStack_a8 == 0) goto LAB_024759b8;
    uVar20 = System_String__op_Equality_46d1108
                       (*(undefined8 *)(lStack_a8 + 0x20),*(undefined8 *)PTR_DAT_04cbb230,0);
    puVar2 = PTR_DAT_04cab1f0;
    if ((uVar20 & 1) != 0) {
      Dino_BusSand_AudioHub__PlayMusic_2375a14(_UNK_00e20094,lVar11,uVar12);
      uVar7 = 1;
      goto LAB_0247539c;
    }
    lVar19 = *(long *)PTR_DAT_04cab1f0;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar19 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar19 + 0xb8) + 0x29) == '\0') goto LAB_02475398;
    fVar26 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if ((lStack_a8 == 0) || (*(long *)(lVar11 + 0x48) == 0)) goto LAB_024759b8;
    uVar12 = *(undefined8 *)(lStack_a8 + 0x10);
    uVar20 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                       (*(long *)(lVar11 + 0x48),uVar12,&fStack_ac,*(undefined8 *)PTR_DAT_04cbb220);
    fVar27 = fVar26 - fStack_ac;
    if ((uVar20 & 1) == 0) {
      fVar27 = _UNK_00e20560;
    }
    if (lStack_a8 == 0) goto LAB_024759b8;
    if ((0.0 < *(float *)(lStack_a8 + 0x50)) && (fVar27 < *(float *)(lStack_a8 + 0x50)))
    goto LAB_02475398;
    if (*(int *)(lStack_a8 + 0x58) < 1) {
      lVar19 = 0;
    }
    else {
      if (*(long *)(lVar11 + 0x68) == 0) goto LAB_024759b8;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_108,*(long *)(lVar11 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
      puVar3 = PTR_DAT_04cbb208;
      iVar33 = 0;
      puStack_c8 = puStack_100;
      uStack_d0 = uStack_108;
      lStack_c0 = lStack_f8;
      uStack_108 = 0;
      puStack_100 = &uStack_d0;
      lVar19 = 0;
      while (lVar16 = lVar19,
            uVar20 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_d0,*(undefined8 *)puVar3), lVar23 = lStack_c0,
            (uVar20 & 1) != 0) {
        if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar20 = System_String__op_Inequality_46d110c(*(undefined8 *)(lStack_c0 + 0x18),uVar12,0);
        lVar19 = lVar16;
        if (((((uVar20 & 1) == 0) &&
             (uVar20 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar23), (uVar20 & 1) != 0)) &&
            (*(float *)(lVar23 + 0x38) <= 0.0)) &&
           ((iVar33 = iVar33 + 1, lVar19 = lVar23, lVar16 != 0 &&
            (lVar19 = lVar16, *(float *)(lVar23 + 0x30) < *(float *)(lVar16 + 0x30))))) {
          lVar19 = lVar23;
        }
      }
      FUN_01e7a8a8(&uStack_108);
      if (lStack_a8 == 0) goto LAB_024759b8;
      lVar19 = 0;
      if (*(int *)(lStack_a8 + 0x58) <= iVar33) {
        lVar19 = lVar16;
      }
    }
    if (*(float *)(lStack_a8 + 0x68) == 0.0) {
      iVar33 = 0;
    }
    else {
      fVar32 = *(float *)(lStack_a8 + 0x6c);
      if (*(float *)(lStack_a8 + 0x6c) <= 0.0) {
        fVar32 = 1.5;
      }
      if (fVar32 <= fVar27) {
LAB_02475534:
        iVar33 = 0;
      }
      else {
        if (*(long *)(lVar11 + 0x60) == 0) goto LAB_024759b8;
        uVar20 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                           (*(long *)(lVar11 + 0x60),uVar12,&iStack_d4,
                            *(undefined8 *)PTR_DAT_04cad650);
        if ((uVar20 & 1) == 0) goto LAB_02475534;
        iVar33 = iStack_d4 + 1;
      }
      if ((lStack_a8 == 0) || (*(long *)(lVar11 + 0x60) == 0)) goto LAB_024759b8;
      iVar1 = *(int *)(lStack_a8 + 0x70);
      iVar5 = iVar33;
      if (iVar1 <= iVar33) {
        iVar5 = iVar1;
      }
      if (0 < iVar1) {
        iVar33 = iVar5;
      }
      System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
                (*(long *)(lVar11 + 0x60),uVar12,iVar33,*(undefined8 *)PTR_DAT_04cad660);
    }
    if ((*(long *)(lVar11 + 0x48) == 0) ||
       (System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                  (fVar26,*(long *)(lVar11 + 0x48),uVar12,*(undefined8 *)PTR_DAT_04cbb128),
       lStack_a8 == 0)) goto LAB_024759b8;
    lVar23 = *(long *)(lStack_a8 + 0x80);
    if ((lVar23 == 0) || (*(int *)(lVar23 + 0x18) < 1)) {
LAB_02475720:
      uVar7 = 0;
    }
    else {
      uVar24 = Dino_BusSand_AudioHub__PickClip_2375c0c(lVar11);
      lVar23 = System_Collections_Generic_List_object___get_Item_3a81924
                         (lVar23,uVar24,*(undefined8 *)PTR_DAT_04cb1850);
      if (lVar23 == 0) goto LAB_024759b8;
      lVar16 = Dino_BusSand_AudioHub__Clip_23742fc(lVar11,*(undefined8 *)(lVar23 + 0x10));
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar20 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
      if ((uVar20 & 1) == 0) goto LAB_02475720;
      if (lStack_a8 == 0) goto LAB_024759b8;
      iVar5 = *(int *)(lStack_a8 + 0x5c);
      if (iVar5 < 1) {
        iVar5 = 0x80;
      }
      lVar17 = Dino_BusSand_AudioHub__Acquire_2375f30(lVar11,iVar5);
      uVar7 = 0;
      if (lVar17 != 0) {
        if ((lVar19 != 0) && (lVar19 != lVar17)) {
          *(undefined4 *)(lVar19 + 0x38) = 0x42200000;
        }
        if (lStack_a8 == 0) goto LAB_024759b8;
        fVar34 = *(float *)(lStack_a8 + 0x38);
        fVar32 = *(float *)(lVar23 + 0x20);
        fVar27 = (float)UnityEngine_Random__Range_43b64a8
                                  (*(undefined4 *)(lStack_a8 + 0x3c),
                                   *(undefined4 *)(lStack_a8 + 0x40),0);
        if (lStack_a8 == 0) goto LAB_024759b8;
        fVar31 = *(float *)(lStack_a8 + 0x44);
        fVar30 = *(float *)(lVar23 + 0x24);
        fVar28 = (float)UnityEngine_Random__Range_43b64a8
                                  (*(undefined4 *)(lStack_a8 + 0x48),
                                   *(undefined4 *)(lStack_a8 + 0x4c),0);
        if ((lStack_a8 == 0) || (lVar19 = *(long *)(lVar17 + 0x10), lVar19 == 0)) goto LAB_024759b8;
        fVar35 = *(float *)(lStack_a8 + 0x68);
        uVar20 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar19,0);
        if ((uVar20 & 1) != 0) {
          UnityEngine_AudioSource__Stop_43488b8(lVar19,0);
        }
        UnityEngine_AudioSource__set_clip_434875c(lVar19,lVar16,0);
        UnityEngine_AudioSource__set_loop_4348b90(lVar19,0,0);
        *(undefined8 *)(lVar17 + 0x18) = uVar12;
        thunk_FUN_02134474((undefined8 *)(lVar17 + 0x18),uVar12);
        if (lStack_a8 == 0) goto LAB_024759b8;
        uVar20 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_a8 + 0x20),0);
        puVar14 = (undefined8 *)PTR_DAT_04cbb228;
        if ((uVar20 & 1) == 0) {
          if (lStack_a8 == 0) goto LAB_024759b8;
          puVar14 = (undefined8 *)(lStack_a8 + 0x20);
        }
        *(undefined8 *)(lVar17 + 0x20) = *puVar14;
        thunk_FUN_02134474((undefined8 *)(lVar17 + 0x20));
        lVar18 = *(long *)puVar2;
        *(int *)(lVar17 + 0x28) = iVar5;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar32 = (float)func_0x049b5300(0x41200000,(fVar34 + fVar32 + fVar27) / 20.0);
        fVar32 = fVar32 * 1.0;
        fVar27 = 4.0;
        if (fVar32 <= 4.0) {
          fVar27 = fVar32;
        }
        *(undefined8 *)(lVar17 + 0x34) = _UNK_00e698b8;
        fVar34 = 0.0;
        if (0.0 <= fVar32) {
          fVar34 = fVar27;
        }
        *(float *)(lVar17 + 0x2c) = fVar34;
        *(float *)(lVar17 + 0x30) = fVar26;
        fVar27 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8
                                  (lVar11,*(undefined8 *)(lVar17 + 0x20));
        fVar34 = fVar34 * fVar27;
        fVar27 = 1.0;
        if (fVar34 <= 1.0) {
          fVar27 = fVar34;
        }
        fVar32 = 0.0;
        if (0.0 <= fVar34) {
          fVar32 = fVar27;
        }
        UnityEngine_AudioSource__set_volume_434840c(fVar32,lVar19,0);
        fVar32 = (float)exp2f((fVar31 + fVar30 + fVar28 + fVar35 * (float)iVar33) / 1200.0);
        fVar32 = fVar32 * 1.0;
        fVar27 = 3.0;
        if (fVar32 <= 3.0) {
          fVar27 = fVar32;
        }
        fVar34 = _UNK_00e20754;
        if (_UNK_00e20754 <= fVar32) {
          fVar34 = fVar27;
        }
        UnityEngine_AudioSource__set_pitch_43484e0(fVar34,lVar19,0);
        if (lStack_a8 == 0) goto LAB_024759b8;
        fVar27 = 0.0;
        if (*(char *)(lStack_a8 + 0x60) == '\0') {
          fVar32 = *(float *)(lStack_a8 + 100);
          if (fVar32 <= 0.0) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 0.0;
          fVar34 = 1.0;
          if (fVar32 <= 1.0) {
            fVar34 = fVar32;
          }
          fVar27 = -1.0;
          if (-1.0 <= fVar32) {
            fVar27 = fVar34;
          }
        }
        UnityEngine_AudioSource__set_panStereo_4348d18(fVar27,lVar19,0);
        if (lVar16 == 0) goto LAB_024759b8;
        iVar33 = *(int *)(lVar23 + 0x1c);
        fVar32 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar16,0);
        fVar28 = 0.0;
        fVar34 = (float)iVar33 / 1000.0;
        fVar27 = 0.0;
        if (0.0 <= fVar32 + _UNK_00e20000) {
          fVar27 = fVar32 + _UNK_00e20000;
        }
        if (fVar34 <= fVar27) {
          fVar27 = fVar34;
        }
        fVar32 = 0.0;
        if (0.0 <= fVar34) {
          fVar32 = fVar27;
        }
        UnityEngine_AudioSource__set_time_4348598(fVar32,lVar19,0);
        fVar27 = (float)*(int *)(lVar23 + 0x28) / 1000.0 + 0.0;
        if (fVar27 <= _UNK_00e20a7c) {
          UnityEngine_AudioSource__Play_4348894(lVar19,0);
        }
        else {
          dVar29 = (double)UnityEngine_AudioSettings__get_dspTime_4345fc8(0);
          UnityEngine_AudioSource__PlayScheduled_434889c(dVar29 + (double)fVar27,lVar19,0);
          fVar28 = fVar26 + fVar27 + _UNK_00e2043c;
        }
        *(float *)(lVar17 + 0x3c) = fVar28;
        uVar7 = 1;
      }
    }
    if ((lStack_a8 != 0) &&
       ((*(float *)(lStack_a8 + 0x78) <= 0.0 ||
        (Dino_BusSand_AudioHub__Duck_23761a8(*(undefined4 *)(lStack_a8 + 0x74),lVar11),
        lStack_a8 != 0)))) {
      if (*(long *)(lStack_a8 + 0x88) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_f0,*(long *)(lStack_a8 + 0x88),*(undefined8 *)PTR_DAT_04cab720);
        puVar2 = PTR_DAT_04cab6c8;
        uStack_108 = 0;
        puStack_100 = &uStack_f0;
        while (uVar20 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_f0,*(undefined8 *)puVar2), (uVar20 & 1) != 0) {
          uVar6 = Dino_BusSand_AudioHub__PlayDepth_2375064
                            (0x3f800000,0x3f800000,0,0,lVar11,uStack_e0,1);
          uVar7 = uVar7 | uVar6;
        }
        FUN_01e77dbc(&uStack_108);
      }
LAB_0247539c:
      return (ulong)(uVar7 & 1);
    }
LAB_024759b8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  puVar14 = (undefined8 *)PTR_DAT_04cb0828;
  if ((uVar10 & 1) == 0) {
    if (iVar33 == 0) {
      if (*(long *)(uVar20 + 0x40) == 0) goto LAB_022d8238;
      uVar10 = Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport_2246400
                         (*(long *)(uVar20 + 0x40),0);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(uVar20 + 0x40) != 0) {
          iVar33 = Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8
                             (*(long *)(uVar20 + 0x40),0);
          uVar12 = *(undefined8 *)PTR_DAT_04caec90;
          if ((bRam0000000004f9bb81 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            FUN_02132f7c(PTR_DAT_04cb01a8);
            FUN_02132f7c(PTR_DAT_04cb0810);
            FUN_02132f7c(PTR_DAT_04cb0818);
            FUN_02132f7c(PTR_DAT_04cb0820);
            bRam0000000004f9bb81 = 1;
          }
          puVar2 = PTR_DAT_04ca9ae8;
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar20 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
          if ((iVar33 < 1) || ((uVar20 & 1) != 0)) {
            return 0;
          }
          if (lVar11 != 0) {
            uVar20 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                               (lVar11,*(undefined8 *)PTR_DAT_04cb0810);
            if ((uVar20 & 1) != 0) {
              return 0;
            }
            lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb01a8);
            System_Object___ctor_4870e5c(lVar19,0);
            if (lVar19 != 0) {
              *(int *)(lVar19 + 0x10) = iVar33;
              *(undefined8 *)(lVar19 + 0x18) = uVar12;
              thunk_FUN_02134474((undefined8 *)(lVar19 + 0x18),uVar12);
              uVar12 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                 (lVar11,*(undefined8 *)PTR_DAT_04cb0820,2,lVar19,
                                  *(undefined8 *)PTR_DAT_04cb0818);
              lVar11 = *(long *)puVar2;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar11);
              }
              puVar2 = PTR_DAT_04ca9ae8;
              if ((bRam0000000004fa8638 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
                bRam0000000004fa8638 = 1;
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar12,0);
              return (ulong)((uVar7 ^ 0xffffffff) & 1);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_022d8238;
      }
    }
    Dino_BusSand_App_UI_PassportPanel__PlayLock_21d823c(uVar20,iVar33);
    if (*(long *)(uVar20 + 0x40) == 0) goto LAB_022d8238;
    uVar20 = Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport_2246400
                       (*(long *)(uVar20 + 0x40),0);
    puVar14 = (undefined8 *)PTR_DAT_04cb0830;
    if ((uVar20 & 1) == 0) {
      puVar14 = (undefined8 *)PTR_DAT_04cb0858;
    }
  }
  puVar2 = PTR_DAT_04caba50;
  uVar12 = *puVar14;
  if ((bRam0000000004f9bb5e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04ca9bc0);
    bRam0000000004f9bb5e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar2;
  }
  uVar8 = **(undefined8 **)(lVar11 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar20 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar20 & 1) == 0) {
    return uVar20;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9d18;
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar2;
  }
  lVar23 = *(long *)puVar3;
  lVar19 = *(long *)(lVar23 + 0x38);
  lVar11 = **(long **)(lVar11 + 0xb8);
  if (lVar19 == 0) {
    FUN_0216b4cc(lVar23);
    lVar19 = *(long *)(lVar23 + 0x38);
  }
  lVar19 = *(long *)(lVar19 + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cab550;
  lVar19 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  uVar8 = **(undefined8 **)(lVar19 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar19 = Dino_BusSand_App_Lang__Get_215f9c0(uVar12,uVar8,0);
  if ((lVar19 == 0) ||
     (lVar19 = System_String__Replace_46d4a70
                         (lVar19,*(undefined8 *)PTR_DAT_04ca9bc0,*(undefined8 *)PTR_DAT_04caa398,0),
     puVar2 = PTR_DAT_04cabb08, lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar19,0);
    bRam0000000004f9b87c = 1;
  }
  lVar11 = *(long *)(lVar11 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar24 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar19,0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabb08);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cafbb8);
    FUN_02132f7c(PTR_DAT_04cb6578);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb64b8);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c314 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar20 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
  puVar3 = PTR_DAT_04cabb08;
  if ((uVar20 & 1) != 0) {
    return uVar20;
  }
  lVar16 = *(long *)PTR_DAT_04cabb08;
  lVar23 = *(long *)PTR_DAT_04ca9c30;
  if (lVar19 != 0) {
    lVar23 = lVar19;
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar3;
  }
  **(long **)(lVar16 + 0xb8) = lVar23;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar23);
  uVar25 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar25;
  if (lVar11 == 0) goto LAB_023bd530;
  uVar12 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar11,4,0);
  plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar8 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar11 = System_Type__GetTypeFromHandle_483f0b4(uVar8,0);
  if (plVar9 == (long *)0x0) goto LAB_023bd530;
  if ((lVar11 != 0) &&
     (lVar23 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar23 == 0)) {
    uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar12,0);
  }
  if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar9[4] = lVar11;
  thunk_FUN_02134474(plVar9 + 4,lVar11);
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar11,*(undefined8 *)PTR_DAT_04cb6578,plVar9,0);
  if ((lVar11 == 0) ||
     (lVar23 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0), lVar23 == 0))
  goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar23,uVar12,0,0);
  plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
  if (plVar9 == (long *)0x0) goto LAB_023bd530;
  if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar9);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar24,plVar9,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar24,plVar9,0);
  puVar4 = PTR_DAT_04cad330;
  lVar23 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar23 = *(long *)puVar4;
  }
  puVar21 = *(undefined4 **)(lVar23 + 0xb8);
  uStack_68 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar21,puVar21[1],puVar21[2],puVar21[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  lVar23 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar9,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar19,*(undefined8 *)PTR_DAT_04cad4a8,
                      &stack0xffffffffffffff80,0x202,0);
  if (lVar23 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar23,1,0);
  fVar27 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar23,lVar19,0);
  fVar26 = 150.0;
  if (150.0 <= fVar27 + 70.0) {
    fVar26 = fVar27 + 70.0;
  }
  lVar19 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar23,0);
  if (lVar19 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar26 + -50.0,lVar19,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar26,plVar9,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  fVar27 = 1.0;
  if (fVar26 / 241.0 <= 1.0) {
    fVar27 = fVar26 / 241.0;
  }
  lVar19 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                     (0x44660000,fVar26,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                      (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar27,plVar9,
                      *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,
                      &stack0xffffffffffffff68,0);
  if (lVar19 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar19,0);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar20 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((uVar20 & 1) == 0) {
    fVar26 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar19 = *(long *)puVar3;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar19 = *(long *)puVar3;
    }
    if (_UNK_00e200f8 < fVar26 - *(float *)(*(long *)(lVar19 + 0xb8) + 0x18)) goto LAB_023bd36c;
  }
  else {
LAB_023bd36c:
    puVar4 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar19 = *(long *)puVar4;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar19 = *(long *)puVar4;
    }
    if (**(long **)(lVar19 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar19 + 0xb8),0);
    }
  }
  lVar19 = *(long *)puVar3;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar19 = *(long *)puVar3;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar20 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar20 & 1) != 0) {
    lVar19 = *(long *)puVar3;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar19 = *(long *)puVar3;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x10));
  }
  lVar19 = *(long *)puVar3;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar19 = *(long *)puVar3;
  }
  plVar15 = (long *)(*(long *)(lVar19 + 0xb8) + 0x10);
  *plVar15 = lVar11;
  thunk_FUN_02134474(plVar15,lVar11);
  uVar24 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar33 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar24;
  if (iVar33 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar19 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar11,0);
  if (lVar19 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar19,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar9,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar9,0,0);
    uVar20 = Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar11);
    return uVar20;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

