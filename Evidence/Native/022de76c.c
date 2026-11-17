/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$InitPlayData
void Dino_BusSand_App_UI_StreakRateGameRow__InitPlayData (Dino_BusSand_App_UI_StreakRateGameRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$InitPlayData
   void Dino_BusSand_App_UI_StreakRateGameRow__InitPlayData
   (Dino_BusSand_App_UI_StreakRateGameRow_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRateGameRow__InitPlayData_21de76c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9bb9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb10);
    bRam0000000004f9bb9a = 1;
  }
  uStack_24 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = Dino_BusSand_App_Meta_StreakRateFeature__CurRateIndex_224cc70
                      (*(long *)(param_1 + 0x20),0);
    lVar4 = *(long *)(param_1 + 0x40);
    if (3 < (int)uVar2) {
      uVar2 = 4;
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x48) = uVar2;
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar4 = *(long *)(lVar4 + (ulong)uVar2 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar4 == 0) goto LAB_022de90c;
          lVar6 = *(long *)(param_1 + 0x28);
          UnityEngine_Transform__get_position_43d0e48(lVar4,0);
          if (lVar6 == 0) goto LAB_022de90c;
          UnityEngine_Transform__set_position_43d0f1c(lVar6,0);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar4 == 0) goto LAB_022de90c;
          lVar6 = *(long *)(param_1 + 0x30);
          UnityEngine_Transform__get_position_43d0e48(lVar4,0);
          if (lVar6 == 0) goto LAB_022de90c;
          UnityEngine_Transform__set_position_43d0f1c(lVar6,0);
        }
      }
      puVar1 = PTR_DAT_04cabb10;
      if (*(long *)(param_1 + 0x20) != 0) {
        uStack_24 = Dino_BusSand_App_Meta_StreakRateFeature__RateNumber_224c86c
                              (*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x48),0);
        uVar5 = System_Int32__ToString_482d750(&uStack_24,0);
        uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar5,0);
        Dino_BusSand_App_UI_StreakRateGameRow__SetMoveText_21de914(param_1,uVar5);
        return;
      }
    }
  }
LAB_022de90c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

