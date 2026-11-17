/* IL2CPP: Dino.BusSand.App.Ads$$InterScene
System_String_o* Dino_BusSand_App_Ads__InterScene (System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$InterScene
   System_String_o* Dino_BusSand_App_Ads__InterScene (System_String_o* slot, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Ads__InterScene_2176940(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04caca98;
                    /* try { // try from 02276948 to 0237694f has its CatchHandler @ 02276960 */
                    /* try { // try from 02276950 to 0237697b has its CatchHandler @ 02276924 */
  if ((bRam0000000004f9b8e0 & 1) == 0) {
                    /* catch() { ... } // from try @ 02276948 with catch @ 02276960 */
    FUN_02132f7c(PTR_DAT_04cad058);
    FUN_02132f7c(PTR_DAT_04cad060);
                    /* catch() { ... } // from try @ 022769b8 with catch @ 0227697c */
    FUN_02132f7c(PTR_DAT_04cacb88);
    FUN_02132f7c(PTR_DAT_04cad068);
    FUN_02132f7c(PTR_DAT_04caca98);
    bRam0000000004f9b8e0 = 1;
  }
                    /* try { // try from 022769ac to 023769b7 has its CatchHandler @ 022769cc */
  uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar1,0);
  puVar2 = PTR_DAT_04cad060;
  puVar1 = PTR_DAT_04cad058;
  puVar4 = (undefined8 *)PTR_DAT_04cad068;
                    /* catch() { ... } // from try @ 022769ac with catch @ 022769cc */
                    /* try { // try from 022769d4 to 02376a8f has its CatchHandler @ 022769d4
                       catch() { ... } // from try @ 022769d4 with catch @ 022769d4
                       catch() { ... } // from try @ 02276aac with catch @ 022769d4 */
  if (((uVar3 & 1) == 0) &&
     (uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cacb88,0),
     puVar4 = (undefined8 *)puVar2, (uVar3 & 1) == 0)) {
    puVar4 = (undefined8 *)puVar1;
  }
  return *puVar4;
}

