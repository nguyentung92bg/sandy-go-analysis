/* IL2CPP: Dino.BusSand.App.UI.WelcomeBackPanel$$<OnOpen>b__5_0
void Dino_BusSand_App_UI_WelcomeBackPanel___OnOpen_b__5_0 (Dino_BusSand_App_UI_WelcomeBackPanel_o* __this, UnityEngine_Vector3_o from, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023a8ee0) */
/* IL2CPP: Dino.BusSand.App.UI.WelcomeBackPanel$$<OnOpen>b__5_0
   void Dino_BusSand_App_UI_WelcomeBackPanel___OnOpen_b__5_0
   (Dino_BusSand_App_UI_WelcomeBackPanel_o* __this, UnityEngine_Vector3_o from, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_WelcomeBackPanel___OnOpen_b__5_0_232dd84
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_DAT_04cb8fe8;
  if ((bRam0000000004f9c616 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8ff0);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cb8ff8);
    FUN_02132f7c(PTR_DAT_04cb9000);
    FUN_02132f7c(PTR_DAT_04cb8fe8);
    bRam0000000004f9c616 = 1;
  }
  lVar4 = *(long *)puVar1;
  lVar9 = *(long *)(param_4 + 0x70);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  lVar10 = puVar7[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8ff8);
    System_Predicate_KeyValuePair_int__long_____ctor_2c49858
              (lVar10,uVar11,*(undefined8 *)PTR_DAT_04cb9000,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar10;
    thunk_FUN_02134474(plVar5,lVar10);
  }
  if ((lVar9 == 0) ||
     (plVar5 = (long *)System_Collections_Generic_List_KeyValuePair_int__long____FindAll_3965f50
                                 (lVar9,lVar10,*(undefined8 *)PTR_DAT_04cb8ff0),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((int)plVar5[3] < 1) {
    return;
  }
  if ((bRam0000000004f9c298 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf5d8,0,1,0);
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
  lVar4 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((plVar5 != (long *)0x0) && ((uVar3 & 1) == 0)) {
    lVar9 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04caf5d8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023a8e4c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
    iVar2 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    if (iVar2 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar4,0);
      if ((uVar3 & 1) != 0) {
        uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
        System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                  (uVar11,plVar5,*(undefined8 *)PTR_DAT_04caf7a0);
        lVar9 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                          (param_1,param_2,param_3,lVar4,uVar11,0,1);
        if (lVar9 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar6 = thunk_FUN_0216e89c();
          uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar6,uVar11,0);
        }
        else {
          uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar3 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar10 = *(long *)(lVar4 + 0x10);
            if (lVar10 != 0) {
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar10,lVar9);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar6 = thunk_FUN_0216e89c();
          uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar6,uVar11,0);
        }
        uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar6,uVar11);
      }
    }
  }
  return;
}

