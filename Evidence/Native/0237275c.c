/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddHearts
void Dino_BusSand_App_Meta_Profile__AddHearts (int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$AddHearts
   void Dino_BusSand_App_Meta_Profile__AddHearts (int32_t n, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__AddHearts_227275c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cabaf8;
                    /* try { // try from 02372770 to 024727b3 has its CatchHandler @ 02372470 */
  if ((bRam0000000004f9c106 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c106 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 023727b4 to 024727c3 has its CatchHandler @ 023727c4 */
  Dino_BusSand_App_Meta_Profile__RegenHearts_227157c();
  if (cRam0000000004f9b894 == '\0') {
                    /* catch() { ... } // from try @ 02372758 with catch @ 023727c4
                       catch() { ... } // from try @ 023727b4 with catch @ 023727c4 */
                    /* try { // try from 023727c8 to 024727cb has its CatchHandler @ 023727d4 */
                    /* try { // try from 023727cc to 024727d7 has its CatchHandler @ 02372470 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023727c8 with catch @ 023727d4
                        */
    cRam0000000004f9b894 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  uVar4 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = System_Math__Min_4831118(uVar4,iVar1 + param_1,0);
    cVar3 = cRam0000000004f9b894;
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x28) = uVar4;
      if (cVar3 == '\0') {
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
        iVar1 = *(int *)(lVar6 + 0x28);
        iVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
        lVar6 = *(long *)puVar2;
        if (iVar5 <= iVar1) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
          if (lVar7 == 0) goto LAB_02372964;
          *(undefined8 *)(lVar7 + 0x30) = 0;
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
        lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0237294c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),0x3ea,*(undefined8 *)(lVar6 + 0x28));
          return;
        }
        return;
      }
    }
  }
LAB_02372964:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

