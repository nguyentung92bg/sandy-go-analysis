/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SecondsToNextHeart
int32_t Dino_BusSand_App_Meta_Profile__SecondsToNextHeart (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SecondsToNextHeart
   int32_t Dino_BusSand_App_Meta_Profile__SecondsToNextHeart (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Profile__SecondsToNextHeart_2272b38(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c100 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* try { // try from 02372b64 to 02472b6b has its CatchHandler @ 02372ca8 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c100 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__RegenHearts_227157c();
                    /* try { // try from 02372b90 to 02472bdb has its CatchHandler @ 02372cac */
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x28);
    iVar3 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
    if (iVar3 <= iVar1) {
      return 0;
    }
                    /* try { // try from 02372bdc to 02472c9f has its CatchHandler @ 02372ae4 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x30) < 1) {
        return 0;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Meta_Profile__Now_2271090();
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02372ca0 to 02472ca3 has its CatchHandler @ 02372ca4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02372ca0 with catch @ 02372ca4
                       try { // try from 02372ca4 to 02472cc3 has its CatchHandler @ 02372ae4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02372b64 with catch @ 02372ca8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02372b90 with catch @ 02372cac
                        */
        uVar5 = System_Math__Max_4830fd4(0,(lVar6 - lVar4) + 0x708,0);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02372cc4 to 02472cdb has its CatchHandler @ 02372d68 */
  FUN_02133224();
}

