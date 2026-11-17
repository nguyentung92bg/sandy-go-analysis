/* IL2CPP: Dino.BusSand.AudioHub$$Key
System_String_o* Dino_BusSand_AudioHub__Key (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Key
   System_String_o* Dino_BusSand_AudioHub__Key (Dino_BusSand_AudioHub_o* __this, System_String_o*
   id, const MethodInfo* method); */

undefined8 Dino_BusSand_AudioHub__Key_23746fc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c7e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04caaf80);
    bRam0000000004f9c7e7 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0xc0) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_1 + 0xc0),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cab608)
    ;
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0xc0);
      if (*(int *)(*(long *)PTR_DAT_04cab1f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_28 = Dino_BusSand_AudioHub__Norm_2374274(param_2);
      if (lVar2 == 0) goto LAB_024747cc;
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar2,param_2,uStack_28,*(undefined8 *)PTR_DAT_04caaf80);
    }
    return uStack_28;
  }
LAB_024747cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

