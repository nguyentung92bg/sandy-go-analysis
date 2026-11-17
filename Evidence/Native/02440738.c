/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$StartTravel
void Dino_BusSand_Cheat_AutoPlayHand__StartTravel (Dino_BusSand_Cheat_AutoPlayHand_o* __this, UnityEngine_Vector2_o to, float len, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$StartTravel
   void Dino_BusSand_Cheat_AutoPlayHand__StartTravel (Dino_BusSand_Cheat_AutoPlayHand_o* __this,
   UnityEngine_Vector2_o to, float len, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  cVar2 = cRam0000000004f9b9de;
  uVar3 = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(param_4 + 0x60) = uVar3;
  if (cVar2 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b9de = '\x01';
  }
  puVar1 = PTR_DAT_04caa200;
  fVar8 = param_2 - (float)((ulong)uVar3 >> 0x20);
  fVar7 = param_1 - (float)uVar3;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar6 = SQRT(fVar7 * fVar7 + fVar8 * fVar8);
  if (fVar6 <= _UNK_00e20a08) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar3 = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  }
  else {
    uVar3 = CONCAT44(fVar7 / fVar6,-fVar8 / fVar6);
  }
  uVar9 = *(undefined8 *)(param_4 + 0x60);
  if (cRam0000000004f9b9de == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b9de = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar8 = (float)UnityEngine_Random__Range_43b64a8(_UNK_00e205f8,_UNK_00e208cc,0);
  fVar4 = (float)UnityEngine_Random__get_value_43b6570(0);
  *(undefined4 *)(param_4 + 0x48) = 0;
  fVar7 = _UNK_00e2043c;
  fVar5 = -1.0;
  if (0.5 <= fVar4) {
    fVar5 = 1.0;
  }
  *(undefined4 *)(param_4 + 0x40) = 2;
  if (fVar7 <= param_3) {
    fVar7 = param_3;
  }
  *(float *)(param_4 + 0x4c) = fVar7;
  *(ulong *)(param_4 + 0x68) =
       CONCAT44((param_2 + (float)((ulong)uVar9 >> 0x20)) * 0.5 +
                (float)((ulong)uVar3 >> 0x20) * fVar6 * fVar8 * fVar5,
                (param_1 + (float)uVar9) * 0.5 + (float)uVar3 * fVar6 * fVar8 * fVar5);
  return;
}

