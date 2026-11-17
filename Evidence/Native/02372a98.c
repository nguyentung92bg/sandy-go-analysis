/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_InfiniteHearts
bool Dino_BusSand_App_Meta_Profile__get_InfiniteHearts (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_InfiniteHearts
   bool Dino_BusSand_App_Meta_Profile__get_InfiniteHearts (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0fd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
                    /* try { // try from 02372ae4 to 02472b63 has its CatchHandler @ 02372ae4
                       catch() { ... } // from try @ 02372ae4 with catch @ 02372ae4
                       catch() { ... } // from try @ 02372bdc with catch @ 02372ae4
                       catch() { ... } // from try @ 02372ca4 with catch @ 02372ae4
                       catch() { ... } // from try @ 02372cdc with catch @ 02372ae4
                       catch() { ... } // from try @ 02372d64 with catch @ 02372ae4
                       catch() { ... } // from try @ 02372d70 with catch @ 02372ae4 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x38);
    lVar2 = Dino_BusSand_App_Meta_Profile__Now_2271090();
    return lVar2 < lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

