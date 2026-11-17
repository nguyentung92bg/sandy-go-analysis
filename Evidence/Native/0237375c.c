/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetFlag
void Dino_BusSand_App_Meta_Profile__SetFlag (System_String_o* name, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetFlag
   void Dino_BusSand_App_Meta_Profile__SetFlag (System_String_o* name, bool on, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_Profile__SetFlag_227375c(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c10a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cad298);
    FUN_02132f7c(PTR_DAT_04cad250);
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 023737b8 to 02473823 has its CatchHandler @ 023737b8
                       catch() { ... } // from try @ 023737b8 with catch @ 023737b8
                       catch() { ... } // from try @ 0237396c with catch @ 023737b8
                       catch() { ... } // from try @ 023739c4 with catch @ 023737b8
                       catch() { ... } // from try @ 02373a64 with catch @ 023737b8
                       catch() { ... } // from try @ 02373a70 with catch @ 023737b8 */
    bRam0000000004f9c10a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
                    /* try { // try from 02373824 to 0247382f has its CatchHandler @ 02373990 */
    uVar2 = System_Collections_Generic_List_object___Contains_3a81f90
                      (lVar3,param_1,*(undefined8 *)PTR_DAT_04cad298);
    if (((uVar2 & 1) == 0) && (((param_2 ^ 1) & 1) == 0)) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02373840 to 02473847 has its CatchHandler @ 02373994 */
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
                    /* try { // try from 0237384c to 02473853 has its CatchHandler @ 02373988 */
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar1;
                    /* try { // try from 02373864 to 0247388f has its CatchHandler @ 02373980 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)PTR_DAT_04cab718;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar3 + 0x18);
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
            puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
            *puVar5 = param_1;
            thunk_FUN_02134474(puVar5,param_1);
          }
          else {
                    /* try { // try from 02373964 to 0247396b has its CatchHandler @ 02373994 */
                    /* try { // try from 0237396c to 024739ab has its CatchHandler @ 023737b8 */
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar3,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_02373970;
        }
      }
    }
    else {
      if ((uVar2 & (param_2 ^ 1) & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 02373918 to 02473923 has its CatchHandler @ 02373984 */
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
                    /* try { // try from 02373940 to 02473963 has its CatchHandler @ 0237398c */
        System_Collections_Generic_List_object___Remove_3a830f8
                  (lVar3,param_1,*(undefined8 *)PTR_DAT_04cad250);
LAB_02373970:
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9c0ee & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          bRam0000000004f9c0ee = 1;
        }
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 1;
        fVar7 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = fVar7 + 0.5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02373824 with catch @ 02373990
                        */
  FUN_02133224();
}

