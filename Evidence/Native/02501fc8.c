/* IL2CPP: Dino.BusSand.View.VehicleView.<>c__DisplayClass233_0$$<TurnParkedTo>b__0
void Dino_BusSand_View_VehicleView___c__DisplayClass233_0___TurnParkedTo_b__0 (Dino_BusSand_View_VehicleView___c__DisplayClass233_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView.<>c__DisplayClass233_0$$<TurnParkedTo>b__0
   void Dino_BusSand_View_VehicleView___c__DisplayClass233_0___TurnParkedTo_b__0
   (Dino_BusSand_View_VehicleView___c__DisplayClass233_0_o* __this, float t, const MethodInfo*
   method); */

void Dino_BusSand_View_VehicleView___c__DisplayClass233_0___TurnParkedTo_b__0_2401fc8
               (undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cb0d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cb0d = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  Dino_BusSand_Easing__Evaluate_238b7d0(param_1,10,0);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = UnityEngine_Quaternion__SlerpUnclamped_43aef2c(*(undefined4 *)(param_2 + 0x18),0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 500) = uVar5;
    *(undefined4 *)(lVar4 + 0x1f8) = uVar6;
    *(undefined4 *)(lVar4 + 0x1fc) = uVar7;
    *(undefined4 *)(lVar4 + 0x200) = uVar8;
    lVar4 = *(long *)(param_2 + 0x10);
    if (lVar4 != 0) {
      if (1 < *(uint *)(lVar4 + 0x2c)) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x38);
      if (lVar4 != 0) {
        if ((bRam0000000004fa8b38 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b38 = 1;
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8bc0 == (code *)0x0) {
          pcRam0000000004fa8bc0 = (code *)FUN_02132f40(&UNK_00e2b2f8);
        }
        (*pcRam0000000004fa8bc0)(lVar4,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

