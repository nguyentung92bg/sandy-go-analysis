/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Fly
void Dino_BusSand_App_UI_GiftPackUi__Fly (System_Collections_Generic_List_KeyValuePair_int__long___o* rewards, UnityEngine_Vector3_o from, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Fly
   void Dino_BusSand_App_UI_GiftPackUi__Fly
   (System_Collections_Generic_List_KeyValuePair_int__long___o* rewards, UnityEngine_Vector3_o from,
   System_Action_o* done, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi__Fly_21ab544
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  if ((bRam0000000004f9c298 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf5d8,param_5,0,0);
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
  lVar10 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((param_4 != (long *)0x0) && ((uVar3 & 1) == 0)) {
    lVar7 = *param_4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04caf5d8) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023a8e4c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(param_4,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
    iVar2 = (*(code *)*puVar4)(param_4,puVar4[1]);
    if (iVar2 != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar10,0);
      if ((uVar3 & 1) != 0) {
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
        System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                  (uVar5,param_4,*(undefined8 *)PTR_DAT_04caf7a0);
        lVar7 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                          (param_1,param_2,param_3,lVar10,uVar5,param_5,0);
        if (lVar7 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar6 = thunk_FUN_0216e89c();
          uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar6,uVar5,0);
        }
        else {
          uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar3 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar10 != 0) {
              lVar9 = *(long *)(lVar10 + 0x10);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar9,lVar7);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar6 = thunk_FUN_0216e89c();
          uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar6,uVar5,0);
        }
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar6,uVar5);
      }
    }
  }
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023a8f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x18))(*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x28));
    return;
  }
  return;
}

