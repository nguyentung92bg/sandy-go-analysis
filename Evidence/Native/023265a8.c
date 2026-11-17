/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$RecordWorth
void Dino_BusSand_App_Meta_BattleRoyaleFeature__RecordWorth (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, int64_t worth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$RecordWorth
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__RecordWorth
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, int64_t worth, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__RecordWorth_22265a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9bde0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bde0 = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (param_2 < 1) {
    return;
  }
  lVar3 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  iVar2 = System_Math__Min_4831124(0x7fffffff,param_2,0);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((0 < iVar2) && (*(int *)(lVar4 + 0x48) == 1)) {
      lVar3 = *(long *)(lVar3 + 0x28);
      *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + iVar2;
      *(ulong *)(lVar4 + 0x50) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x50) >> 0x20) + iVar2,
                    (int)*(undefined8 *)(lVar4 + 0x50) + iVar2);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02324238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

