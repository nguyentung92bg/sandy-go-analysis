/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$StepCap
void Dino_BusSand_App_UI_HomeToonRig__StepCap (Dino_BusSand_App_UI_HomeToonRig_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$StepCap
   void Dino_BusSand_App_UI_HomeToonRig__StepCap (Dino_BusSand_App_UI_HomeToonRig_o* __this, float
   dt, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__StepCap_22f5bdc(float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c488 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c488 = 1;
  }
  lVar2 = *(long *)puVar1;
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_2 + 0x114) = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if ((0.0 <= *(float *)(param_2 + 0xbc)) &&
       (fVar5 = *(float *)(param_2 + 0xbc) + param_1, *(float *)(param_2 + 0xbc) = fVar5,
       fVar6 = _UNK_00e1feac, 0.5 <= fVar5)) {
      *(undefined4 *)(param_2 + 0xbc) = 0xbf800000;
      *(undefined1 *)(param_2 + 0x114) = 1;
      *(float *)(param_2 + 0xc4) = *(float *)(param_2 + 0xc4) + fVar6;
    }
    fVar6 = *(float *)(param_2 + 0xc4) +
            (*(float *)(param_2 + 0xc0) * -300.0 + *(float *)(param_2 + 0xc4) * -15.0) * param_1;
    *(float *)(param_2 + 0xc0) = *(float *)(param_2 + 0xc0) + fVar6 * param_1;
    *(float *)(param_2 + 0xc4) = fVar6;
  }
  return;
}

