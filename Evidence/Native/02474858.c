/* IL2CPP: Dino.BusSand.AudioHub$$Def
Dino_BusSand_AudioEventDef_o* Dino_BusSand_AudioHub__Def (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Def
   Dino_BusSand_AudioEventDef_o* Dino_BusSand_AudioHub__Def (Dino_BusSand_AudioHub_o* __this,
   System_String_o* id, const MethodInfo* method); */

undefined8 Dino_BusSand_AudioHub__Def_2374858(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c7e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb120);
    bRam0000000004f9c7e9 = 1;
  }
  uStack_28 = 0;
  uVar1 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    uVar2 = Dino_BusSand_AudioHub__Key_23746fc(param_1,param_2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar3,uVar2,&uStack_28,*(undefined8 *)PTR_DAT_04cbb120);
    uVar2 = uStack_28;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

