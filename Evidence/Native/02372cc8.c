/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_HasHeartToPlay
bool Dino_BusSand_App_Meta_Profile__get_HasHeartToPlay (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_HasHeartToPlay
   bool Dino_BusSand_App_Meta_Profile__get_HasHeartToPlay (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Profile__get_HasHeartToPlay_2272cc8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cac458;
                    /* try { // try from 02372cdc to 02472d53 has its CatchHandler @ 02372ae4 */
  if ((bRam0000000004f9c101 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c101 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 2) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98();
                    /* try { // try from 02372d54 to 02472d63 has its CatchHandler @ 02372d68 */
                    /* try { // try from 02372d64 to 02472d6b has its CatchHandler @ 02372ae4 */
    if (((uVar4 & 1) == 0) && (**(char **)(*(long *)PTR_DAT_04cab380 + 0xb8) == '\0')) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02372d6c with catch @ 02372d78
                        */
                    /* try { // try from 02372d7c to 02472fb3 has its CatchHandler @ 02372d7c
                       catch() { ... } // from try @ 02372d7c with catch @ 02372d7c
                       catch() { ... } // from try @ 02373030 with catch @ 02372d7c
                       catch() { ... } // from try @ 02373050 with catch @ 02372d7c
                       catch() { ... } // from try @ 02373084 with catch @ 02372d7c
                       catch() { ... } // from try @ 023730b0 with catch @ 02372d7c
                       catch() { ... } // from try @ 02373240 with catch @ 02372d7c
                       catch() { ... } // from try @ 023732c4 with catch @ 02372d7c
                       catch() { ... } // from try @ 023732f8 with catch @ 02372d7c
                       catch() { ... } // from try @ 02373324 with catch @ 02372d7c */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar2 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0();
      return 0 < iVar2;
    }
  }
                    /* catch() { ... } // from try @ 02372cc4 with catch @ 02372d68
                       catch() { ... } // from try @ 02372d54 with catch @ 02372d68 */
                    /* try { // try from 02372d6c to 02472d6f has its CatchHandler @ 02372d78 */
                    /* try { // try from 02372d70 to 02472d7b has its CatchHandler @ 02372ae4 */
  return true;
}

