/* IL2CPP: Dino.BusSand.App.UI.StorePanel.<>c__DisplayClass41_0$$<OnBuy>b__1
void Dino_BusSand_App_UI_StorePanel___c__DisplayClass41_0___OnBuy_b__1 (Dino_BusSand_App_UI_StorePanel___c__DisplayClass41_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023a8ee0) */
/* WARNING: Removing unreachable block (ram,0x023b5524) */
/* WARNING: Removing unreachable block (ram,0x023b5548) */
/* WARNING: Removing unreachable block (ram,0x023b5598) */
/* WARNING: Removing unreachable block (ram,0x023b5778) */
/* WARNING: Removing unreachable block (ram,0x023b55b0) */
/* WARNING: Removing unreachable block (ram,0x023b55cc) */
/* WARNING: Removing unreachable block (ram,0x023b55d8) */
/* WARNING: Removing unreachable block (ram,0x023b55e8) */
/* WARNING: Removing unreachable block (ram,0x023b55ec) */
/* WARNING: Removing unreachable block (ram,0x023b55f4) */
/* WARNING: Removing unreachable block (ram,0x023b55f8) */
/* WARNING: Removing unreachable block (ram,0x023b5614) */
/* WARNING: Removing unreachable block (ram,0x023b5618) */
/* WARNING: Removing unreachable block (ram,0x023b5634) */
/* WARNING: Removing unreachable block (ram,0x023b563c) */
/* WARNING: Removing unreachable block (ram,0x023b5668) */
/* WARNING: Removing unreachable block (ram,0x023b5674) */
/* WARNING: Removing unreachable block (ram,0x023b5684) */
/* WARNING: Removing unreachable block (ram,0x023b5688) */
/* WARNING: Removing unreachable block (ram,0x023b5690) */
/* WARNING: Removing unreachable block (ram,0x023b5694) */
/* WARNING: Removing unreachable block (ram,0x023b56b0) */
/* WARNING: Removing unreachable block (ram,0x023b56b4) */
/* WARNING: Removing unreachable block (ram,0x023b56e4) */
/* WARNING: Removing unreachable block (ram,0x023b56f0) */
/* WARNING: Removing unreachable block (ram,0x023b5700) */
/* WARNING: Removing unreachable block (ram,0x023b5704) */
/* WARNING: Removing unreachable block (ram,0x023b570c) */
/* WARNING: Removing unreachable block (ram,0x023b5710) */
/* WARNING: Removing unreachable block (ram,0x023b572c) */
/* WARNING: Removing unreachable block (ram,0x023b5730) */
/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel.<>c__DisplayClass41_0$$<OnBuy>b__1
   void Dino_BusSand_App_UI_StorePanel___c__DisplayClass41_0___OnBuy_b__1
   (Dino_BusSand_App_UI_StorePanel___c__DisplayClass41_0_o* __this, bool ok, const MethodInfo*
   method); */

long * Dino_BusSand_App_UI_StorePanel___c__DisplayClass41_0___OnBuy_b__1_22ba2a8
                 (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 ulong param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  char cVar19;
  int *piVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  undefined4 uVar25;
  long lStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_70 [4];
  char acStack_6c [4];
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04cb6420;
  lVar13 = *(long *)(param_4 + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar25 = *(undefined4 *)(param_4 + 0x18);
  if ((bRam0000000004f9c2f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b0);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6428);
    FUN_02132f7c(PTR_DAT_04cb6420);
    FUN_02132f7c(PTR_DAT_04cac7c8);
    FUN_02132f7c(PTR_DAT_04cac7d0);
    FUN_02132f7c(PTR_DAT_04cac7d8);
    bRam0000000004f9c2f9 = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  plVar9 = (long *)System_Object___ctor_4870e5c(lVar8,0);
  if (*(char *)(lVar13 + 0x50) == '\0') {
    return plVar9;
  }
  *(undefined1 *)(lVar13 + 0x50) = 0;
  Dino_BusSand_App_UI_StoreWaitingPanel__Hide_22bb980(0);
  if ((param_5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(uVar25);
    if (lVar8 != 0) {
      puVar21 = (undefined8 *)(lVar8 + 0x10);
      *puVar21 = uVar10;
      thunk_FUN_02134474(puVar21,uVar10);
      uVar11 = Dino_BusSand_App_UI_StorePanel__IsItemVisible_22b87b4(uVar25);
      if (((uVar11 & 1) == 0) ||
         (uVar11 = Dino_BusSand_App_UI_StorePanel__IsSoldOut_22b851c(uVar25), (uVar11 & 1) != 0)) {
        Dino_BusSand_App_UI_StorePanel__Refresh_22b72b8(lVar13);
      }
      puVar2 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      if (**(long **)(lVar12 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__IapSuccess_2383a8c(**(long **)(lVar12 + 0xb8),0);
      }
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      puVar2 = PTR_DAT_04ca9ae8;
      lVar12 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
      lVar22 = 0;
      if ((uVar11 & 1) != 0) {
        if (lVar12 == 0) goto LAB_023b9fc4;
        uVar11 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                           (lVar12,*(undefined8 *)PTR_DAT_04cac7c8);
        if ((uVar11 & 1) == 0) {
          lVar22 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                             (lVar12,*(undefined8 *)PTR_DAT_04cac7d8,4,*puVar21,
                              *(undefined8 *)PTR_DAT_04cac7d0);
        }
        else {
          lVar22 = 0;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar22,0,0);
      if ((uVar11 & 1) == 0) {
        plVar9 = (long *)*puVar21;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
        if ((uVar11 & 1) == 0) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          puVar18 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          uVar25 = *puVar18;
          param_2 = puVar18[1];
          param_3 = puVar18[2];
        }
        else {
          lVar13 = UnityEngine_Component__get_transform_43bcd18(lVar13,0);
          if (lVar13 == 0) goto LAB_023b9fc4;
          uVar25 = UnityEngine_Transform__get_position_43d0e48(lVar13,0);
        }
        if ((bRam0000000004f9c2fa & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04caf1a8);
          bRam0000000004f9c2fa = 1;
        }
        puVar2 = PTR_DAT_04ca9ae8;
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        puVar3 = PTR_DAT_04cad1b0;
        uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
        if ((uVar11 & 1) != 0) {
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (**(long **)(*(long *)puVar3 + 0xb8),*(undefined8 *)PTR_DAT_04caf1a8);
        }
        if ((bRam0000000004f9c298 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caf5d8);
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
        lVar13 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar7 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
        if ((plVar9 != (long *)0x0) && (((ulong)plVar7 & 1) == 0)) {
          lVar8 = *plVar9;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04caf5d8) {
                puVar21 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_023a8e4c;
              }
              uVar11 = uVar11 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar11 != 0);
          }
          puVar21 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
          plVar7 = (long *)(*(code *)*puVar21)(plVar9,puVar21[1]);
          if ((int)plVar7 != 0) {
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            plVar7 = (long *)UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar13,0);
            if (((ulong)plVar7 & 1) != 0) {
              uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
              System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                        (uVar10,plVar9,*(undefined8 *)PTR_DAT_04caf7a0);
              lVar8 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                                (uVar25,param_2,param_3,lVar13,uVar10,0,1);
              if (lVar8 == 0) {
                thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                uVar16 = thunk_FUN_0216e89c();
                uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                System_NullReferenceException___ctor_483267c(uVar16,uVar10,0);
              }
              else {
                uVar11 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                if ((uVar11 & 1) != 0) {
                  if ((bRam0000000004fa84ef & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf7890);
                    bRam0000000004fa84ef = 1;
                  }
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar12 = *(long *)(lVar13 + 0x10);
                  if (lVar12 != 0) {
                    if (pcRam0000000004fa8560 == (code *)0x0) {
                      pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                    }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    plVar9 = (long *)(*pcRam0000000004fa8560)(lVar12,lVar8);
                    return plVar9;
                  }
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar13,0);
                }
                thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                uVar16 = thunk_FUN_0216e89c();
                uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                System_ArgumentException___ctor_47b660c(uVar16,uVar10,0);
              }
              uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar16,uVar10);
            }
          }
        }
        return plVar7;
      }
      lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7b0);
      System_Action_Vector3____ctor_35f2828(lVar13,lVar8,*(undefined8 *)PTR_DAT_04cb6428,0);
      if (lVar22 != 0) {
        plVar9 = (long *)(lVar22 + 0x50);
        *plVar9 = lVar13;
        if (iRam00000000051c1b10 != 0) {
          plVar9 = (long *)FUN_02220bf0(1L << ((ulong)plVar9 >> 0xc & 0x3f),
                                        ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return plVar9;
      }
    }
LAB_023b9fc4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar9 = (long *)Dino_BusSand_App_Iap__get_QuietFail_217bd74(0);
  puVar2 = PTR_DAT_04cb6278;
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  if ((bRam0000000004f9c300 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb6278);
    FUN_02132f7c(PTR_DAT_04cb62a8);
    FUN_02132f7c(PTR_DAT_04cb62b0);
    FUN_02132f7c(PTR_DAT_04caec20);
    bRam0000000004f9c300 = 1;
  }
  lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_UI_StoreTipsPanel_Request___ctor_22bb108(lVar13,0);
  puVar2 = PTR_DAT_04ca9d18;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar13 + 0x10) = 2;
  lVar12 = *(long *)puVar2;
  lVar8 = *(long *)(lVar12 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar12);
    lVar8 = *(long *)(lVar12 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cab550;
  lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  puVar4 = PTR_DAT_04cb62a8;
  uVar10 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar10 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar4,uVar10,0);
  *(undefined8 *)(lVar13 + 0x18) = uVar10;
  thunk_FUN_02134474();
  lVar12 = *(long *)puVar2;
  lVar8 = *(long *)(lVar12 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar12);
    lVar8 = *(long *)(lVar12 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb62b0;
  lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  uVar10 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar3,**(undefined8 **)(lVar8 + 0xb8),0);
  *(undefined8 *)(lVar13 + 0x20) = uVar10;
  thunk_FUN_02134474();
  lVar12 = *(long *)puVar2;
  lVar8 = *(long *)(lVar12 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar12);
    lVar8 = *(long *)(lVar12 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04caec20;
  lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  uVar10 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar2,**(undefined8 **)(lVar8 + 0xb8),0);
  *(undefined8 *)(lVar13 + 0x28) = uVar10;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar13 + 0x30) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar13 + 0x30),0);
  if ((bRam0000000004f9c2ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6468);
    FUN_02132f7c(PTR_DAT_04cb6470);
    FUN_02132f7c(PTR_DAT_04cb6478);
    bRam0000000004f9c2ff = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((lVar13 == 0) || ((uVar11 & 1) != 0)) {
    return (long *)0x0;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar11 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                     (lVar8,*(undefined8 *)PTR_DAT_04cb6468);
  if ((uVar11 & 1) != 0) {
    return (long *)0x0;
  }
  lVar12 = *(long *)PTR_DAT_04cb6478;
  lVar22 = *(long *)PTR_DAT_04cb6470;
  if (*(long *)(lVar22 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar22 + 0x38) == 0) {
      FUN_0216b4cc(lVar22);
    }
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar10 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar9 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar10,0);
  uVar10 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar22 + 0x38),0);
  if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
  uVar6 = (**(code **)(*plVar9 + 0x2b8))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x2c0));
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar12,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
    if ((uVar11 & 1) != 0) {
      uVar10 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar12,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar10,0);
      return (long *)0x0;
    }
    uVar16 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar14 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar10,uVar16,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar14 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar10 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar14 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar12,uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
    if ((uVar11 & 1) == 0) goto LAB_02a45794;
    plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar10 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
    }
    lVar14 = System_Type__GetTypeFromHandle_483f0b4(uVar10,0);
    if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar14 != 0) &&
       (lVar15 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar9 + 0x40)), lVar15 == 0)) {
      uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar10,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar9[4] = lVar14;
    thunk_FUN_02134474(plVar9 + 4,lVar14);
    lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar14,lVar12,plVar9,0);
    lVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
    if (((lVar15 == 0) ||
        (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar15 == 0)) ||
       (uVar25 = UnityEngine_GameObject__get_layer_43c1118(lVar15,0), lVar14 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar14,uVar25,0);
    lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
    uVar10 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
    if (lVar15 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar15,uVar10,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar14,lVar12,0);
  plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
  if ((uVar11 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar2 = PTR_DAT_04cacfc0;
    if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),plVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar15 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
               *(undefined4 *)(lVar15 + 0x14),plVar9,0);
  }
  lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar14,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
  if ((uVar11 & 1) != 0) {
    lVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar14,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar15 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar15,0x19,0);
    if (*(long *)(lVar8 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar8 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar2 = PTR_DAT_04cabac0;
      iVar24 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar2), lVar5 = lStack_80,
            (uVar11 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar11 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar5 + 0x2c) == '\0') && (*(int *)(lVar5 + 0x28) == 4)) {
            iVar24 = iVar24 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar15,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar15,iVar24 * 0x14 + 0xfb4,0);
      uVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar14,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
      if ((uVar11 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar14,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar14,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar14,0);
      plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar14,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
      lVar22 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar14,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar4 = PTR_DAT_04cae1a8;
      puVar2 = PTR_DAT_04cae1a0;
      if (lVar22 != 0) {
        uVar17 = *(uint *)(lVar22 + 0x18);
        if (0 < (int)uVar17) {
          uVar23 = 0;
          do {
            if (uVar17 <= uVar23) goto LAB_02a45eb4;
            lVar15 = *(long *)(lVar22 + (long)(int)uVar23 * 8 + 0x20);
            if (lVar15 == 0) goto LAB_02a45eb0;
            uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,lVar14,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar15,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
              if ((uVar11 & 1) != 0) {
                lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
                if (lVar15 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar15,*(undefined8 *)puVar4);
              }
            }
            uVar17 = *(uint *)(lVar22 + 0x18);
            uVar23 = uVar23 + 1;
          } while ((int)uVar23 < (int)uVar17);
        }
        if (plVar9 != (long *)0x0) {
          plVar9[4] = lVar12;
          thunk_FUN_02134474(plVar9 + 4,lVar12);
          *(undefined4 *)(plVar9 + 5) = 4;
          lVar8 = *(long *)(lVar8 + 0x38);
          if (lVar8 != 0) {
            lVar22 = *(long *)(lVar8 + 0x10);
            lVar15 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar22 != 0) {
              uVar17 = *(uint *)(lVar8 + 0x18);
              if (uVar17 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar17 + 1;
                plVar7 = (long *)(lVar22 + (long)(int)uVar17 * 8 + 0x20);
                *plVar7 = (long)plVar9;
                thunk_FUN_02134474(plVar7,plVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar8,plVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = PTR_DAT_04cb4ce0;
              puVar2 = PTR_DAT_04cad7b8;
              if ((uVar6 & 1) == 0) {
                lVar8 = *(long *)PTR_DAT_04cb4ce0;
                cVar19 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
                lVar8 = *(long *)puVar2;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar10,lVar12,0);
                lVar8 = *(long *)puVar3;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                  lVar8 = *(long *)puVar3;
                }
                cVar19 = **(char **)(lVar8 + 0xb8);
              }
              acStack_6c[0] = cVar19 != '\0';
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar8);
                lVar8 = *(long *)puVar3;
              }
              lVar12 = *(long *)(lVar8 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar12 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                *(undefined1 *)(lVar12 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar9 + 0x178))(plVar9,lVar13,*(undefined8 *)(*plVar9 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar13 = *(long *)puVar3;
                uVar1 = *puStack_b8;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar13 = *(long *)puVar3;
                }
                *(undefined1 *)(*(long *)(lVar13 + 0xb8) + 1) = uVar1;
              }
              uVar10 = *puStack_b0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar10,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar13 = *(long *)puVar3;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar13 = *(long *)puVar3;
                  }
                  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                  if (lVar13 != 0) {
                    (**(code **)(lVar13 + 0x18))
                              (*(undefined8 *)(lVar13 + 0x40),plVar9,*(undefined8 *)(lVar13 + 0x28))
                    ;
                  }
                }
                uVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar10,0);
                uVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar10,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar9,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar9,0);
                return plVar9;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

