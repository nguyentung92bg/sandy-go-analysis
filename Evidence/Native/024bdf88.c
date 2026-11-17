/* IL2CPP: Dino.BusSand.View.MechFx$$Prefab
UnityEngine_GameObject_o* Dino_BusSand_View_MechFx__Prefab (Dino_BusSand_View_MechFx_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$Prefab
   UnityEngine_GameObject_o* Dino_BusSand_View_MechFx__Prefab (Dino_BusSand_View_MechFx_o* __this,
   System_String_o* key, const MethodInfo* method); */

undefined8 Dino_BusSand_View_MechFx__Prefab_23bdf88(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c9b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7df8);
    FUN_02132f7c(PTR_DAT_04cb7e00);
    FUN_02132f7c(PTR_DAT_04cad5f8);
    FUN_02132f7c(PTR_DAT_04cbcfa0);
    bRam0000000004f9c9b5 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_1 + 0x28),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cb7df8)
    ;
    if ((uVar1 & 1) == 0) {
      uVar2 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbcfa0,param_2,0);
      uStack_28 = UnityEngine_Resources__Load_object__2891e2c(uVar2,*(undefined8 *)PTR_DAT_04cad5f8)
      ;
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_024be06c;
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (*(long *)(param_1 + 0x28),param_2,uStack_28,*(undefined8 *)PTR_DAT_04cb7e00);
    }
    return uStack_28;
  }
LAB_024be06c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

