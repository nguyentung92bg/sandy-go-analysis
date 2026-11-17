/* IL2CPP: Dino.BusSand.App.Lang$$Text
bool Dino_BusSand_App_Lang__Text (System_Collections_Generic_Dictionary_string__object__o* map, System_String_o* key, System_String_o** s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$Text
   bool Dino_BusSand_App_Lang__Text (System_Collections_Generic_Dictionary_string__object__o* map,
   System_String_o* key, System_String_o** s, const MethodInfo* method); */

uint Dino_BusSand_App_Lang__Text_215f904(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plStack_28;
  
  if ((bRam0000000004f9b81b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaf40);
    bRam0000000004f9b81b = 1;
  }
  plStack_28 = (long *)0x0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (param_1,param_2,&plStack_28,*(undefined8 *)PTR_DAT_04caaf40);
  if (((uVar2 & 1) == 0) || (plStack_28 == (long *)0x0)) {
                    /* try { // try from 0225f988 to 0235f9f7 has its CatchHandler @ 0225f988
                       catch() { ... } // from try @ 0225f988 with catch @ 0225f988
                       catch() { ... } // from try @ 0225faa0 with catch @ 0225f988 */
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = plStack_28;
    if (*plStack_28 != *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
      plVar3 = (long *)0x0;
    }
  }
  *param_3 = plVar3;
  thunk_FUN_02134474(param_3);
  uVar1 = System_String__IsNullOrEmpty_46d2084(*param_3,0);
  return (uVar1 ^ 0xffffffff) & 1;
}

