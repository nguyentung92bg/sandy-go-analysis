/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$ParsePower
double Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParsePower (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$ParsePower
   double Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParsePower
   (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParsePower_2259634(long param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double extraout_d0;
  undefined1 auVar7 [16];
  double dVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_18 [8];
  
  if ((bRam0000000004f9c006 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c006 = 1;
  }
  auVar8._0_8_ = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseUnary_22596e4(param_1);
  sVar2 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
  puVar1 = PTR_DAT_04caa200;
  if (sVar2 != 0x5e) {
    auVar8._8_8_ = 0;
    return auVar8;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  dVar6 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParsePower_2259634(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = 0;
  dVar5 = auVar8._0_8_;
  if ((NAN(auVar8._0_8_)) || (dVar5 = dVar6, NAN(dVar6))) goto LAB_0216b450;
  if ((-1.0 < auVar8._0_8_) && (auVar8._0_8_ < 1.0)) {
    if (dVar6 == -INFINITY) {
      dVar5 = INFINITY;
      goto LAB_0216b450;
    }
    dVar5 = 0.0;
    if (dVar6 == INFINITY) goto LAB_0216b450;
  }
  if (((-1.0 <= auVar8._0_8_) && (auVar8._0_8_ <= 1.0)) ||
     ((dVar5 = 0.0, dVar6 != -INFINITY && (dVar5 = INFINITY, dVar6 != INFINITY)))) {
    if (auVar8._0_8_ == -INFINITY) {
      dVar5 = 0.0;
      if ((0.0 <= dVar6) && (dVar5 = 1.0, 0.0 < dVar6)) {
        dVar4 = (double)fmod(dVar6,ZEXT816(0x4000000000000000));
        dVar5 = -INFINITY;
        if (dVar4 != (double)((ulong)dVar6 ^
                             ((ulong)dVar6 ^ 0x3ff0000000000000) & 0x7ff8000000000000)) {
          dVar5 = INFINITY;
        }
      }
    }
    else {
      if (auVar8._0_8_ < 0.0) {
        uVar3 = FUN_049b52f0(dVar6,auStack_18);
        dVar5 = NAN;
        if (((dVar6 == -INFINITY) || (dVar6 == INFINITY)) || (extraout_d0 != 0.0))
        goto LAB_0216b450;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar6;
      dVar4 = (double)pow(auVar8._0_8_,auVar9,uVar3);
      dVar6 = 0.0;
      if (dVar4 != 0.0) {
        dVar6 = dVar4;
      }
      dVar5 = 1.0;
      if (!NAN(dVar4)) {
        dVar5 = dVar6;
      }
    }
  }
LAB_0216b450:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar5;
  return auVar7;
}

