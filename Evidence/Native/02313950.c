/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Tenths
double Dino_BusSand_App_Meta_GameTracking__Tenths (int32_t permille, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Tenths
   double Dino_BusSand_App_Meta_GameTracking__Tenths (int32_t permille, const MethodInfo* method);
    */

undefined1  [16] Dino_BusSand_App_Meta_GameTracking__Tenths_2213950(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9bd44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bd44 = 1;
  }
                    /* try { // try from 02313988 to 0241398b has its CatchHandler @ 0231398c */
                    /* catch() { ... } // from try @ 0231391c with catch @ 0231398c
                       catch() { ... } // from try @ 02313988 with catch @ 0231398c
                       try { // try from 0231398c to 024139ab has its CatchHandler @ 02313884 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = System_Math__Max_4830fc8(0,param_1,0);
                    /* try { // try from 023139ac to 02413c63 has its CatchHandler @ 023139ac
                       catch(type#1 @ 00000000) { ... } // from try @ 023139ac with catch @ 023139ac
                       catch(type#1 @ 00000000) { ... } // from try @ 02313c70 with catch @ 023139ac
                       catch(type#1 @ 00000000) { ... } // from try @ 02313d6c with catch @ 023139ac
                       catch(type#1 @ 00000000) { ... } // from try @ 02313e54 with catch @ 023139ac
                        */
  auVar3._0_8_ = (double)iVar2 / 10.0;
  auVar3._8_8_ = 0;
  return auVar3;
}

