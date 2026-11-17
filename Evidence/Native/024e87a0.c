/* IL2CPP: Dino.BusSand.View.StageLayout$$<CenterYardOn>g__Box|82_1
void Dino_BusSand_View_StageLayout___CenterYardOn_g__Box_82_1 (double cx, double cz, int32_t a, double len, double wid, Dino_BusSand_View_StageLayout___c__DisplayClass82_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$<CenterYardOn>g__Box|82_1
   void Dino_BusSand_View_StageLayout___CenterYardOn_g__Box_82_1 (double cx, double cz, int32_t a,
   double len, double wid, Dino_BusSand_View_StageLayout___c__DisplayClass82_0_o* , const
   MethodInfo* method); */

void Dino_BusSand_View_StageLayout___CenterYardOn_g__Box_82_1_23e87a0
               (double param_1,double param_2,double param_3,double param_4,undefined4 param_5,
               undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dStack_60;
  double dStack_58;
  
  puVar2 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9ca95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9ca95 = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  dStack_60 = 0.0;
  dStack_58 = 0.0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Heading_242bec8(param_5,&dStack_58,&dStack_60,0);
  dVar4 = dStack_58;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar4 = param_3 * 0.5 * ABS(dVar4) + param_4 * 0.5 * ABS(dStack_60);
  dVar5 = param_3 * 0.5 * ABS(dStack_60) + param_4 * 0.5 * ABS(dStack_58);
  uVar3 = System_Math__Min_48310e8(*param_6,param_1 - dVar4,0);
  *param_6 = uVar3;
  uVar3 = System_Math__Max_4830f98(param_6[1],dVar4 + param_1,0);
  param_6[1] = uVar3;
  uVar3 = System_Math__Min_48310e8(param_6[2],param_2 - dVar5,0);
  param_6[2] = uVar3;
  uVar3 = System_Math__Max_4830f98(param_6[3],dVar5 + param_2,0);
  param_6[3] = uVar3;
  return;
}

