/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetItem
void Dino_BusSand_App_Meta_Profile__SetItem (int32_t id, int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetItem
   void Dino_BusSand_App_Meta_Profile__SetItem (int32_t id, int64_t n, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__SetItem_2272308(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f8 = 1;
  }
  if (param_1 == 0x3e9) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
LAB_023724dc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar3 + 0x18) = param_2;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_Profile__Find_227215c(param_1);
    if (lVar3 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 != 0) {
        lVar7 = *(long *)(lVar3 + 0x20);
        lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad240);
        System_Object___ctor_4870e5c(lVar3,0);
        if (lVar3 != 0) {
          *(int *)(lVar3 + 0x10) = param_1;
          *(undefined8 *)(lVar3 + 0x18) = param_2;
          if (lVar7 != 0) {
                    /* try { // try from 02372470 to 0247262f has its CatchHandler @ 02372470
                       catch() { ... } // from try @ 02372470 with catch @ 02372470
                       catch() { ... } // from try @ 023726c0 with catch @ 02372470
                       catch() { ... } // from try @ 02372770 with catch @ 02372470
                       catch() { ... } // from try @ 023727cc with catch @ 02372470 */
            lVar5 = *(long *)(lVar7 + 0x10);
            lVar6 = *(long *)PTR_DAT_04cad248;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *plVar4 = lVar3;
              }
              else {
                uVar1 = *(uint *)(lVar7 + 0x18);
                System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                          (lVar7,uVar1 + 1,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70) + 0x20) + 0xc0) + 0x78));
                lVar5 = *(long *)(lVar7 + 0x10);
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *plVar4 = lVar3;
              }
              if (iRam00000000051c1b10 != 0) {
                FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                             ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
              }
              return;
            }
          }
        }
      }
      goto LAB_023724dc;
    }
    *(undefined8 *)(lVar3 + 0x18) = param_2;
  }
  return;
}

