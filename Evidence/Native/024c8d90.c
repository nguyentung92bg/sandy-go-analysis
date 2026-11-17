/* IL2CPP: Dino.BusSand.View.MechanicLayer$$ArtProp
UnityEngine_GameObject_o* Dino_BusSand_View_MechanicLayer__ArtProp (UnityEngine_GameObject_array* tiers, int32_t symbol, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$ArtProp
   UnityEngine_GameObject_o* Dino_BusSand_View_MechanicLayer__ArtProp (UnityEngine_GameObject_array*
   tiers, int32_t symbol, const MethodInfo* method); */

undefined8 Dino_BusSand_View_MechanicLayer__ArtProp_23c8d90(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (0 < param_2)) {
    if ((int)*(uint *)(param_1 + 0x18) < param_2) {
      uVar1 = 0;
    }
    else {
      if (*(uint *)(param_1 + 0x18) <= param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = *(undefined8 *)(param_1 + (ulong)(param_2 - 1U) * 8 + 0x20);
    }
  }
  return uVar1;
}

