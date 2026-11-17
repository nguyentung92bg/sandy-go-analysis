/* IL2CPP: Dino.BusSand.View.StageLayout$$<CenterYardOn>g__Acc|82_0
void Dino_BusSand_View_StageLayout___CenterYardOn_g__Acc_82_0 (double cx, double cz, int32_t a, int32_t k, Dino_BusSand_View_StageLayout___c__DisplayClass82_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$<CenterYardOn>g__Acc|82_0
   void Dino_BusSand_View_StageLayout___CenterYardOn_g__Acc_82_0 (double cx, double cz, int32_t a,
   int32_t k, Dino_BusSand_View_StageLayout___c__DisplayClass82_0_o* , const MethodInfo* method); */

void Dino_BusSand_View_StageLayout___CenterYardOn_g__Acc_82_0_23e8654
               (double param_1,double param_2,undefined4 param_3,undefined4 param_4,
               undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_90 [16];
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  puVar2 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9ca94 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9ca94 = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Make_242bfa4(auStack_90,param_1,param_2,param_3,param_4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar5 = ABS(dStack_80) * dStack_70 + ABS(dStack_78) * dStack_68;
  dVar4 = dStack_70 * ABS(dStack_78) + ABS(dStack_80) * dStack_68;
  uVar3 = System_Math__Min_48310e8(*param_5,param_1 - dVar5,0);
  *param_5 = uVar3;
  uVar3 = System_Math__Max_4830f98(param_5[1],dVar5 + param_1,0);
  param_5[1] = uVar3;
  uVar3 = System_Math__Min_48310e8(param_5[2],param_2 - dVar4,0);
  param_5[2] = uVar3;
  uVar3 = System_Math__Max_4830f98(param_5[3],dVar4 + param_2,0);
  param_5[3] = uVar3;
  return;
}

