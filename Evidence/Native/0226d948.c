/* IL2CPP: Dino.BusSand.App.CrashContext$$NonFatal
void Dino_BusSand_App_CrashContext__NonFatal (System_String_o* message, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$NonFatal
   void Dino_BusSand_App_CrashContext__NonFatal (System_String_o* message, const MethodInfo*
   method); */

void Dino_BusSand_App_CrashContext__NonFatal_216d948(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04caca30;
  if ((bRam0000000004f9b8b3 & 1) == 0) {
                    /* try { // try from 0226d96c to 0236d977 has its CatchHandler @ 0226d9a8 */
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 0226d978 to 0236d9c3 has its CatchHandler @ 0226d8f8 */
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04caca38);
                    /* catch() { ... } // from try @ 0226d96c with catch @ 0226d9a8 */
    FUN_02132f7c(PTR_DAT_04caca30);
    bRam0000000004f9b8b3 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04cac450;
  if (lVar4 != 0) {
    puVar8 = (undefined8 *)(lVar4 + 0x18);
    *puVar8 = param_1;
    thunk_FUN_02134474(puVar8,param_1);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    plVar9 = (long *)(lVar4 + 0x10);
    *plVar9 = **(long **)(lVar5 + 0xb8);
    thunk_FUN_02134474(plVar9);
    puVar3 = PTR_DAT_04caca38;
    if (*plVar9 != 0) {
      lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar5,lVar4,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
    if (lVar5 != 0) {
      if (7 < *(int *)(lVar5 + 0x18)) {
                    /* try { // try from 0226db14 to 0236db1b has its CatchHandler @ 0226dbfc */
        return;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
        if (lVar5 == 0) goto LAB_0226db40;
      }
      lVar4 = *(long *)(lVar5 + 0x10);
      uVar6 = *puVar8;
      lVar7 = *(long *)PTR_DAT_04cab718;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar4 != 0) {
                    /* try { // try from 0226dae0 to 0236db13 has its CatchHandler @ 0226dae0
                       catch() { ... } // from try @ 0226dae0 with catch @ 0226dae0
                       catch() { ... } // from try @ 0226db64 with catch @ 0226dae0
                       catch() { ... } // from try @ 0226db84 with catch @ 0226dae0 */
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          puVar8 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar6;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        }
        else {
          uVar1 = *(uint *)(lVar5 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (lVar5,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar4 = *(long *)(lVar5 + 0x10);
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar8 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar6;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                       ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
  }
LAB_0226db40:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

