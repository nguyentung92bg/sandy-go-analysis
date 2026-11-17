/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_DaysAway
int32_t Dino_BusSand_App_Meta_Profile__get_DaysAway (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_DaysAway
   int32_t Dino_BusSand_App_Meta_Profile__get_DaysAway (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__get_DaysAway_2271f98(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* try { // try from 02371fc0 to 02471fc3 has its CatchHandler @ 02371fc4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02371fc0 with catch @ 02371fc4
                       try { // try from 02371fc4 to 02471fdf has its CatchHandler @ 02371a00 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02371afc with catch @ 02371fc8
                        */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02371fe0 to 02471ff7 has its CatchHandler @ 0237204c */
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
                    /* try { // try from 02371ff8 to 0247203b has its CatchHandler @ 02371a00 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0xb8);
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(puVar1);
      lVar2 = *(long *)puVar1;
                    /* try { // try from 0237203c to 0247204b has its CatchHandler @ 0237204c */
      cRam0000000004f9b894 = '\x01';
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02371fe0 with catch @ 0237204c
                       catch() { ... } // from try @ 0237203c with catch @ 0237204c */
      thunk_FUN_0218fdac();
                    /* try { // try from 02372050 to 02472053 has its CatchHandler @ 0237205c */
      lVar2 = *(long *)puVar1;
    }
                    /* try { // try from 02372054 to 0247205f has its CatchHandler @ 02371a00 */
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02372050 with catch @ 0237205c
                        */
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x168);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      System_Math__Max_4830fd4(0,lVar3 - lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

