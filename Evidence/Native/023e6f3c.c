/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$End
void Dino_BusSand_App_UI_HomePuffs__End (Dino_BusSand_App_UI_HomePuffs_o* __this, UnityEngine_Mesh_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$End
   void Dino_BusSand_App_UI_HomePuffs__End (Dino_BusSand_App_UI_HomePuffs_o* __this,
   UnityEngine_Mesh_o* m, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePuffs__End_22e6f3c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  float fStack_34;
  
  if (param_2 != 0) {
    UnityEngine_Mesh__Clear_4395cc4(param_2,0);
    UnityEngine_Mesh__SetVertices_439178c(param_2,*(undefined8 *)(param_1 + 0x48),0);
    UnityEngine_Mesh__SetUVs_4392594(param_2,0,*(undefined8 *)(param_1 + 0x50),0);
    UnityEngine_Mesh__SetColors_4392350(param_2,*(undefined8 *)(param_1 + 0x58),0);
    UnityEngine_Mesh__SetTriangles_4394d24(param_2,*(undefined8 *)(param_1 + 0x60),0,0,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar1 = PTR_DAT_04caa208;
    puVar2 = *(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    uVar3 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    fStack_34 = *(float *)((long)puVar2 + 0x14) * _UNK_00e20878 * 0.5;
    uStack_3c = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar2 + 0xc) >> 0x20) * 100000.0 *
                         0.5,(float)*(undefined8 *)((long)puVar2 + 0xc) * 100000.0 * 0.5);
    uStack_48 = uVar3;
    uStack_40 = uVar4;
    UnityEngine_Mesh__set_bounds_438fbac(param_2,&uStack_48,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

