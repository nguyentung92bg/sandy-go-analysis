/* IL2CPP: Dino.BusSand.App.Meta.Profile$$ConsumeHeart
void Dino_BusSand_App_Meta_Profile__ConsumeHeart (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$ConsumeHeart
   void Dino_BusSand_App_Meta_Profile__ConsumeHeart (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__ConsumeHeart_2272d98(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c102 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2580);
    bRam0000000004f9c102 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04cabaf8;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 2) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98();
    if (((uVar5 & 1) == 0) && (**(char **)(*(long *)PTR_DAT_04cab380 + 0xb8) == '\0')) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__RegenHearts_227157c();
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x28) < 1) {
          return;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
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
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x28);
          iVar3 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)puVar2;
          }
          lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
          if (lVar7 != 0) {
            *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + -1;
            if (iVar3 <= iVar1) {
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar7 = FUN_0237cf04(0);
              uVar6 = Dino_BusSand_App_Meta_Profile__Now_2271090();
              if (lVar7 == 0) goto LAB_0237300c;
              lVar4 = *(long *)puVar2;
              *(undefined8 *)(lVar7 + 0x30) = uVar6;
            }
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
                    /* try { // try from 02372fb4 to 02472fbb has its CatchHandler @ 0237305c */
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
                    /* try { // try from 02372fc4 to 02472fd3 has its CatchHandler @ 02373060 */
            Dino_BusSand_App_Meta_GameTracking__Resource_221629c
                      (0x3ea,0xffffffffffffffff,*(undefined8 *)PTR_DAT_04cb2580,0,0);
                    /* try { // try from 02372fe0 to 02472fe7 has its CatchHandler @ 02373058 */
            lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
            if (lVar4 == 0) {
              return;
            }
                    /* try { // try from 02372ff4 to 02472ffb has its CatchHandler @ 02373050 */
                    /* try { // try from 02373000 to 0247302f has its CatchHandler @ 02373064 */
                    /* WARNING: Could not recover jumptable at 0x02373008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),0x3ea,*(undefined8 *)(lVar4 + 0x28));
            return;
          }
        }
      }
LAB_0237300c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

