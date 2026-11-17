/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$SetMoveText
void Dino_BusSand_App_UI_StreakRateGameRow__SetMoveText (Dino_BusSand_App_UI_StreakRateGameRow_o* __this, System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$SetMoveText
   void Dino_BusSand_App_UI_StreakRateGameRow__SetMoveText (Dino_BusSand_App_UI_StreakRateGameRow_o*
   __this, System_String_o* s, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRateGameRow__SetMoveText_21de914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000004f9bb9d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bb9d = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar3 = *(long **)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (plVar3 == (long *)0x0) goto LAB_022de9e8;
          (**(code **)(*plVar3 + 0x518))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x520));
        }
        uVar2 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return;
  }
LAB_022de9e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

