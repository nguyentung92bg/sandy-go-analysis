/* IL2CPP: Dino.BusSand.App.LanguageFonts$$KitFaceFits
bool Dino_BusSand_App_LanguageFonts__KitFaceFits (System_String_o* lang, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$KitFaceFits
   bool Dino_BusSand_App_LanguageFonts__KitFaceFits (System_String_o* lang, const MethodInfo*
   method); */

uint Dino_BusSand_App_LanguageFonts__KitFaceFits_2151c54(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9b7c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab538);
                    /* try { // try from 02251c80 to 02351c87 has its CatchHandler @ 02251cfc */
    FUN_02132f7c(PTR_DAT_04cab530);
    bRam0000000004f9b7c7 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar1 = PTR_DAT_04cab530;
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)PTR_DAT_04cab530;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02251cd4 to 02351cdb has its CatchHandler @ 02251cf8 */
    uVar2 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                      (lVar4,param_1,*(undefined8 *)PTR_DAT_04cab538);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}

