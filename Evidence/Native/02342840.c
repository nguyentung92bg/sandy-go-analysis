/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c$$<Register>b__5_0
int32_t Dino_BusSand_App_Meta_LiveOps___c___Register_b__5_0 (Dino_BusSand_App_Meta_LiveOps___c_o* __this, Dino_BusSand_App_Meta_ILiveFeature_o* a, Dino_BusSand_App_Meta_ILiveFeature_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c$$<Register>b__5_0
   int32_t Dino_BusSand_App_Meta_LiveOps___c___Register_b__5_0 (Dino_BusSand_App_Meta_LiveOps___c_o*
   __this, Dino_BusSand_App_Meta_ILiveFeature_o* a, Dino_BusSand_App_Meta_ILiveFeature_o* b, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps___c___Register_b__5_0_2242840
               (undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9bf12 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37e8);
    bRam0000000004f9bf12 = 1;
  }
  puVar1 = PTR_DAT_04cb37e8;
  uStack_24 = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04cb37e8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_023428d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cb37e8,1);
LAB_023428d4:
    uStack_24 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (param_3 != (long *)0x0) {
      lVar4 = *param_3;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_02342938;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(param_3,*(long *)puVar1,1);
LAB_02342938:
      uVar2 = (*(code *)*puVar3)(param_3,puVar3[1]);
      System_Int32__CompareTo_482d6dc(&uStack_24,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

