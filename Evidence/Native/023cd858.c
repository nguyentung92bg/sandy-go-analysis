/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$.cctor
void Dino_BusSand_App_UI_GuidePanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$.cctor
   void Dino_BusSand_App_UI_GuidePanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel___cctor_22cd858(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_04cabdc0;
  puVar2 = PTR_DAT_04caa038;
  if ((bRam0000000004f9c38e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cae280);
    FUN_02132f7c(PTR_DAT_04cae298);
    FUN_02132f7c(PTR_DAT_04cae2a0);
    FUN_02132f7c(PTR_DAT_04cae2b0);
    FUN_02132f7c(PTR_DAT_04cae2b8);
    FUN_02132f7c(PTR_DAT_04cae2c0);
    FUN_02132f7c(PTR_DAT_04cae2c8);
    bRam0000000004f9c38e = 1;
  }
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = _UNK_00e6a708;
  lVar6 = *(long *)puVar3;
  uVar4 = *(undefined8 *)puVar2;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8) = _UNK_00e69f28;
  uVar1 = _UNK_00e6b760;
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0x18) = _UNK_00e6b768;
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  lVar6 = FUN_02133068(uVar4,7);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_04cae2b0;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20));
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04cae2c0;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28));
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_04cae280;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30));
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_04cae298;
            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x38));
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_04cae2c8;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x40));
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)PTR_DAT_04cae2a0;
                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x48));
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)PTR_DAT_04cae2b8;
                  thunk_FUN_02134474();
                  plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                  *plVar5 = lVar6;
                  thunk_FUN_02134474(plVar5,lVar6);
                  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = _UNK_00e6a628;
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

