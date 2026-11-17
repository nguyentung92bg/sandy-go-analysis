/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$<Call>g__A|12_0
double Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0 (int32_t i, Dino_BusSand_App_Meta_YachtRacingExpr_Parser___c__DisplayClass12_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$<Call>g__A|12_0
   double Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0 (int32_t i,
   Dino_BusSand_App_Meta_YachtRacingExpr_Parser___c__DisplayClass12_0_o* , const MethodInfo*
   method); */

undefined1  [16]
Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(uint param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000004f9c009 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb40b8);
    FUN_02132f7c(PTR_DAT_04cb40c0);
    bRam0000000004f9c009 = 1;
  }
  lVar1 = *param_2;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar1 + 0x18) <= (int)param_1) {
    lVar1 = param_2[1];
    uVar2 = thunk_FUN_021985a8(PTR_DAT_04cb40c8);
    uVar2 = System_String__Concat_46c82e0(lVar1,uVar2,0);
    thunk_FUN_021985a8(PTR_DAT_04cb3f78);
    uVar3 = thunk_FUN_0216e89c();
    System_FormatException___ctor_4818b54(uVar3,uVar2,0);
    uVar2 = thunk_FUN_021985a8(PTR_DAT_04cb40d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar3,uVar2);
  }
  if (*(uint *)(lVar1 + 0x18) <= param_1) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
              (0,param_1,*(undefined8 *)PTR_DAT_04cb40c0);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (param_1 < *(uint *)(lVar1 + 0x18)) {
      auVar4._0_8_ = *(ulong *)(lVar1 + (long)(int)param_1 * 8 + 0x20);
      auVar4._8_8_ = 0;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

