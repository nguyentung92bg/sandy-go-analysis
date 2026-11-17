/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$KeepHearts
void Dino_BusSand_Cheat_AutoQa__KeepHearts (Dino_BusSand_Cheat_AutoQa_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$KeepHearts
   void Dino_BusSand_Cheat_AutoQa__KeepHearts (Dino_BusSand_Cheat_AutoQa_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa__KeepHearts_23423b4(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_04cb95f0;
                    /* try { // try from 024423bc to 025423e7 has its CatchHandler @ 02442450 */
  if ((bRam0000000004f9c69c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb95f0);
    bRam0000000004f9c69c = 1;
  }
  uVar8 = System_String__op_Inequality_46d110c
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_Meta_Profile__get_HasHeartToPlay_2272cc8(0);
                    /* try { // try from 02442428 to 0254244b has its CatchHandler @ 02442560 */
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 0244244c to 0254246b has its CatchHandler @ 024420d0 */
      iVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
      puVar1 = PTR_DAT_04cabaf8;
                    /* catch() { ... } // from try @ 024423bc with catch @ 02442450 */
      if ((bRam0000000004f9c106 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa200,0);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        bRam0000000004f9c106 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__RegenHearts_227157c();
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      uVar3 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        iVar4 = *(int *)(lVar7 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = System_Math__Min_4831118(uVar3,iVar4 + iVar5,0);
        cVar2 = cRam0000000004f9b894;
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 0x28) = uVar3;
          if (cVar2 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar1;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
          if (lVar6 != 0) {
            iVar5 = *(int *)(lVar6 + 0x28);
            iVar4 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
            lVar6 = *(long *)puVar1;
            if (iVar4 <= iVar5) {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar6 = *(long *)puVar1;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar1;
              }
              lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
              if (lVar7 == 0) goto LAB_02372964;
              *(undefined8 *)(lVar7 + 0x30) = 0;
            }
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
            lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
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
  }
  return;
}

