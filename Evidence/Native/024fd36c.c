/* IL2CPP: Dino.BusSand.View.VehicleView$$TurnParkedTo
void Dino_BusSand_View_VehicleView__TurnParkedTo (Dino_BusSand_View_VehicleView_o* __this, int32_t angle, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TurnParkedTo
   void Dino_BusSand_View_VehicleView__TurnParkedTo (Dino_BusSand_View_VehicleView_o* __this,
   int32_t angle, float duration, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TurnParkedTo_23fd36c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = PTR_DAT_04cbe030;
  if ((bRam0000000004f9caf0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbe038);
    FUN_02132f7c(PTR_DAT_04cbe030);
    bRam0000000004f9caf0 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_VehicleView___c__DisplayClass233_0___ctor_2401fc0(lVar4,0);
  puVar3 = PTR_DAT_04cbe038;
  puVar2 = PTR_DAT_04cbc250;
  puVar1 = PTR_DAT_04cac208;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_5;
    thunk_FUN_02134474((long *)(lVar4 + 0x10),param_5);
    lVar5 = *(long *)puVar2;
    uVar6 = *(undefined8 *)(param_5 + 500);
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_5 + 0x1fc);
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_View_StageLayout__YardRotation_23e8950(param_6,0);
    *(undefined4 *)(lVar4 + 0x28) = uVar7;
    *(undefined4 *)(lVar4 + 0x2c) = param_2;
    *(undefined4 *)(lVar4 + 0x30) = param_3;
    *(undefined4 *)(lVar4 + 0x34) = param_4;
    Dino_BusSand_Tween__KillAll_238c648(param_5,0);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)puVar3,0);
    lVar5 = Dino_BusSand_Tween__Value_238bbfc(param_1,uVar6,0);
    if (lVar5 != 0) {
      Dino_BusSand_Tween__SetOwner_238bb58(lVar5,param_5,0);
      fVar9 = *(float *)(lVar4 + 0x2c);
      fVar10 = *(float *)(lVar4 + 0x30);
      fVar8 = (float)UnityEngine_Quaternion__Internal_ToEulerRad_43af09c
                               (*(undefined4 *)(lVar4 + 0x28),fVar9,fVar10,
                                *(undefined4 *)(lVar4 + 0x34),0);
      fVar9 = fVar9 * _UNK_00e20410;
      UnityEngine_Quaternion__Internal_MakePositive_43af5c4
                (fVar8 * _UNK_00e20410,fVar9,fVar10 * _UNK_00e20410,0);
      *(float *)(param_5 + 0x268) = fVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

