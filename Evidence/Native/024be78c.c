/* IL2CPP: Dino.BusSand.View.MechFx$$Release
void Dino_BusSand_View_MechFx__Release (Dino_BusSand_View_MechFx_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$Release
   void Dino_BusSand_View_MechFx__Release (Dino_BusSand_View_MechFx_o* __this, int32_t i, const
   MethodInfo* method); */

void Dino_BusSand_View_MechFx__Release_23be78c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  if ((bRam0000000004f9c9b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab470);
    FUN_02132f7c(PTR_DAT_04cab4b8);
    FUN_02132f7c(PTR_DAT_04cbcfd8);
    FUN_02132f7c(PTR_DAT_04cbcfd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab4d8);
    FUN_02132f7c(PTR_DAT_04cab4e0);
    FUN_02132f7c(PTR_DAT_04cab4e8);
    bRam0000000004f9c9b8 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_ValueTuple_object__object__float__object__Vector3____get_Item_39decf4
              (&lStack_68,*(long *)(param_1 + 0x38),param_2,*(undefined8 *)PTR_DAT_04cbcfd0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(long *)(param_1 + 0x38) != 0) {
      System_Collections_Generic_List_ValueTuple_object__object__float__object__Vector3____RemoveAt_39e0b5c
                (*(long *)(param_1 + 0x38),param_2,*(undefined8 *)PTR_DAT_04cbcfd8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(lStack_68,0,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (lStack_68 != 0) {
        UnityEngine_GameObject__SetActive_43c1408(lStack_68,0,0);
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                            (*(long *)(param_1 + 0x30),uStack_60,&lStack_38,
                             *(undefined8 *)PTR_DAT_04cab470);
          if ((uVar2 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0x30);
            lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab4e8);
            System_Collections_Generic_Stack_object____ctor_2eed478
                      (lVar3,*(undefined8 *)PTR_DAT_04cab4e0);
            lStack_38 = lVar3;
            if (lVar4 == 0) goto LAB_024be93c;
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar4,uStack_60,lVar3,*(undefined8 *)PTR_DAT_04cab4b8);
          }
          if (lStack_38 != 0) {
            System_Collections_Generic_Stack_object___Push_2eedb68
                      (lStack_38,lStack_68,*(undefined8 *)PTR_DAT_04cab4d8);
            return;
          }
        }
      }
    }
  }
LAB_024be93c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

