/* IL2CPP: Dino.BusSand.Core.StageEngine$$ApplyLiftDef
void Dino_BusSand_Core_StageEngine__ApplyLiftDef (Dino_BusSand_Core_Truck_o* t, Dino_BusSand_Core_BusDef_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$ApplyLiftDef
   void Dino_BusSand_Core_StageEngine__ApplyLiftDef (Dino_BusSand_Core_Truck_o* t,
   Dino_BusSand_Core_BusDef_o* b, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__ApplyLiftDef_24220ec(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar3 = *(undefined1 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x34);
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)(param_1 + 0x3c) = uVar3;
    uVar2 = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

