/* IL2CPP: Dino.BusSand.App.UI.StorePanel.<>c__DisplayClass42_0$$<OnBuyResult>b__0
void Dino_BusSand_App_UI_StorePanel___c__DisplayClass42_0___OnBuyResult_b__0 (Dino_BusSand_App_UI_StorePanel___c__DisplayClass42_0_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023a8ee0) */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel.<>c__DisplayClass42_0$$<OnBuyResult>b__0
   void Dino_BusSand_App_UI_StorePanel___c__DisplayClass42_0___OnBuyResult_b__0
   (Dino_BusSand_App_UI_StorePanel___c__DisplayClass42_0_o* __this, UnityEngine_Vector3_o pos, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel___c__DisplayClass42_0___OnBuyResult_b__0_22ba2d0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  plVar6 = *(long **)(param_4 + 0x10);
  if ((bRam0000000004f9c2fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf1a8);
    bRam0000000004f9c2fa = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
              (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04caf1a8);
  }
  if ((bRam0000000004f9c298 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf5d8);
    FUN_02132f7c(PTR_DAT_04caf7a0);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c298 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar12 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
  if ((plVar6 != (long *)0x0) && ((uVar5 & 1) == 0)) {
    lVar8 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04caf5d8) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_023a8e4c;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
    iVar3 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if (iVar3 != 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar12,0);
      if ((uVar5 & 1) != 0) {
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
        System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                  (uVar10,plVar6,*(undefined8 *)PTR_DAT_04caf7a0);
        lVar8 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                          (param_1,param_2,param_3,lVar12,uVar10,0,1);
        if (lVar8 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar7 = thunk_FUN_0216e89c();
          uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar7,uVar10,0);
        }
        else {
          uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar5 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar11 = *(long *)(lVar12 + 0x10);
            if (lVar11 != 0) {
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar11,lVar8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar12,0);
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar7 = thunk_FUN_0216e89c();
          uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar7,uVar10,0);
        }
        uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,uVar10);
      }
    }
  }
  return;
}

