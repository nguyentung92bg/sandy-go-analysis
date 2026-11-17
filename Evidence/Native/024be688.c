/* IL2CPP: Dino.BusSand.View.MechFx$$Stop
void Dino_BusSand_View_MechFx__Stop (Dino_BusSand_View_MechFx_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$Stop
   void Dino_BusSand_View_MechFx__Stop (Dino_BusSand_View_MechFx_o* __this,
   UnityEngine_GameObject_o* go, const MethodInfo* method); */

void Dino_BusSand_View_MechFx__Stop_23be688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 auStack_70 [6];
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbcfc8);
    FUN_02132f7c(PTR_DAT_04cbcfd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9b7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  puVar2 = PTR_DAT_04cbcfd0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_024be788:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar5 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return;
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_024be788;
      System_Collections_Generic_List_ValueTuple_object__object__float__object__Vector3____get_Item_39decf4
                (auStack_70,*(long *)(param_1 + 0x38),iVar5,*(undefined8 *)puVar2);
      uVar3 = auStack_70[0];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,param_2,0);
    } while ((uVar4 & 1) == 0);
    Dino_BusSand_View_MechFx__Release_23be78c(param_1,iVar5);
  }
  return;
}

