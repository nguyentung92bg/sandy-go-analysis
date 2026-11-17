/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$.cctor
void Dino_BusSand_App_UI_HomeToonRig___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$.cctor
   void Dino_BusSand_App_UI_HomeToonRig___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig___cctor_22f6474(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((bRam0000000004f9c48b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb7838);
    FUN_02132f7c(PTR_DAT_04cb7840);
    FUN_02132f7c(PTR_DAT_04cb7848);
    FUN_02132f7c(PTR_DAT_04cb7850);
    FUN_02132f7c(PTR_DAT_04cb7858);
    bRam0000000004f9c48b = 1;
  }
  puVar2 = PTR_DAT_04cb71b0;
  puVar1 = PTR_DAT_04caa038;
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar10 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
  *puVar8 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  uVar7 = _UNK_00e6a300;
  lVar6 = *(long *)puVar2;
  *(undefined4 *)(puVar8 + 1) = uVar10;
  uVar4 = *(undefined8 *)puVar1;
  lVar9 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar9 + 0xc) = uVar7;
  uVar7 = _UNK_00e6a288;
  *(undefined4 *)(lVar9 + 0x14) = 0x3fd47ae1;
  lVar9 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar9 + 0x18) = uVar7;
  uVar7 = _UNK_00e69a28;
  *(undefined4 *)(lVar9 + 0x20) = 0x3fd47ae1;
  lVar9 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar9 + 0x24) = uVar7;
  uVar7 = _UNK_00e6a290;
  *(undefined4 *)(lVar9 + 0x2c) = 0xc00ccccd;
  lVar9 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar9 + 0x30) = uVar7;
  uVar7 = _UNK_00e69f40;
  *(undefined4 *)(lVar9 + 0x38) = 0xbeee147b;
  lVar9 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar9 + 0x3c) = uVar7;
  uVar7 = _UNK_00e6a308;
  *(undefined4 *)(lVar9 + 0x44) = 0x3fcccccd;
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0x48) = uVar7;
  *(undefined4 *)(lVar6 + 0x50) = 0x3f9a3d71;
  lVar6 = FUN_02133068(uVar4,3);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_04cb7838;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20));
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04cb7858;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28));
        puVar3 = PTR_DAT_04cb7850;
        puVar1 = PTR_DAT_04cb7840;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_04cb7848;
          thunk_FUN_02134474();
          plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
          *plVar5 = lVar6;
          thunk_FUN_02134474(plVar5,lVar6);
          uVar10 = UnityEngine_Shader__PropertyToID_4372cb4(*(undefined8 *)puVar3,0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60) = uVar10;
          uVar10 = UnityEngine_Shader__PropertyToID_4372cb4(uVar7,0);
          *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 100) = uVar10;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

